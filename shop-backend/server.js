const express = require("express");
const cors = require("cors");
const mysql = require("mysql2/promise");

const app = express();
app.use(cors());
app.use(express.json());

// Database connection pool
const db = mysql.createPool({
  host: "localhost",
  user: "root",
  password: "your_password",
  database: "shop_db",
});

// GET Endpoint: Fetch live inventory for a given store
app.get("/api/inventory/:storeId", async (req, res) => {
  try {
    const { storeId } = req.params;
    const query = `
      SELECT p.id, p.name, p.category, p.list_price, p.cost_price, 
             IFNULL(si.stock, 0) AS stock
      FROM products p
      LEFT JOIN store_inventory si ON p.id = si.product_id AND si.store_id = ?
    `;
    const [rows] = await db.execute(query, [storeId]);
    res.json(rows);
  } catch (err) {
    res.status(500).json({ error: err.message });
  }
});

// POST Endpoint: Process a sale and update inventory inside a transaction
app.post("/api/sales", async (req, res) => {
  const { storeId, productId, discount } = req.body;
  const connection = await db.getConnection();

  try {
    await connection.beginTransaction();

    // 1. Fetch product details
    const [products] = await connection.execute(
      "SELECT * FROM products WHERE id = ?",
      [productId],
    );
    if (products.length === 0) throw new Error("Product not found");
    const product = products[0];

    // 2. Check stock availability
    const [stockRows] = await connection.execute(
      "SELECT stock FROM store_inventory WHERE store_id = ? AND product_id = ?",
      [storeId, productId],
    );
    const currentStock = stockRows[0]?.stock || 0;
    if (currentStock <= 0) throw new Error("Out of stock in selected store");

    // 3. Compute final price and profit
    const discountAmount = parseFloat(discount) || 0;
    const finalPrice = Math.max(0, product.list_price - discountAmount);
    const profit = finalPrice - product.cost_price;

    // 4. Record sale transaction
    await connection.execute(
      "INSERT INTO sales (store_id, product_id, list_price, discount, final_price, profit) VALUES (?, ?, ?, ?, ?, ?)",
      [
        storeId,
        productId,
        product.list_price,
        discountAmount,
        finalPrice,
        profit,
      ],
    );

    // 5. Deduct stock quantity
    await connection.execute(
      "UPDATE store_inventory SET stock = stock - 1 WHERE store_id = ? AND product_id = ?",
      [storeId, productId],
    );

    await connection.commit();
    res
      .status(201)
      .json({ message: "Sale processed successfully", finalPrice, profit });
  } catch (err) {
    await connection.rollback();
    res.status(400).json({ error: err.message });
  } finally {
    connection.release();
  }
});

app.listen(5000, () => console.log("Backend server running on port 5000"));
