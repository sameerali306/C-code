import React, { useState, useEffect } from "react";

export default function POSComponent() {
  const [storeId, setStoreId] = useState(1);
  const [products, setProducts] = useState([]);
  const [selectedProduct, setSelectedProduct] = useState("");
  const [discount, setDiscount] = useState(0);

  // Fetch inventory from Node.js backend when active store changes
  useEffect(() => {
    fetch(`http://localhost:5000/api/inventory/${storeId}`)
      .then((res) => res.json())
      .then((data) => setProducts(data))
      .catch((err) => console.error("Error fetching inventory:", err));
  }, [storeId]);

  // Submit sale payload to backend REST API
  const handleCompleteSale = async (e) => {
    e.preventDefault();
    if (!selectedProduct) return;

    try {
      const response = await fetch("http://localhost:5000/api/sales", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({
          storeId,
          productId: parseInt(selectedProduct),
          discount: parseFloat(discount),
        }),
      });

      const data = await response.json();
      if (!response.ok) throw new Error(data.error);

      alert(`Sale completed! Amount collected: $${data.finalPrice}`);

      // Refresh local stock view
      setProducts(
        products.map((p) =>
          p.id === parseInt(selectedProduct) ? { ...p, stock: p.stock - 1 } : p,
        ),
      );
      setSelectedProduct("");
      setDiscount(0);
    } catch (err) {
      alert(`Transaction failed: ${err.message}`);
    }
  };

  return (
    <div className="p-6 max-w-2xl mx-auto bg-white rounded shadow font-sans">
      <h2 className="text-xl font-bold mb-4">
        POS Checkout (Separated Frontend)
      </h2>

      <div className="mb-4">
        <label className="font-semibold mr-2">Select Shop Location:</label>
        <select
          value={storeId}
          onChange={(e) => setStoreId(parseInt(e.target.value))}
          className="border p-2 rounded"
        >
          <option value={1}>Shop A - Main Bazaar</option>
          <option value={2}>Shop B - Station Road</option>
        </select>
      </div>

      <form onSubmit={handleCompleteSale} className="space-y-4">
        <div>
          <label className="block font-medium mb-1">Select Item</label>
          <select
            value={selectedProduct}
            onChange={(e) => setSelectedProduct(e.target.value)}
            className="w-full border p-2 rounded"
            required
          >
            <option value="">-- Choose Product --</option>
            {products.map((p) => (
              <option key={p.id} value={p.id} disabled={p.stock <= 0}>
                {p.name} - ${p.list_price} ({p.stock} available)
              </option>
            ))}
          </select>
        </div>

        <div>
          <label className="block font-medium mb-1">Discount Amount ($)</label>
          <input
            type="number"
            value={discount}
            onChange={(e) => setDiscount(e.target.value)}
            className="w-full border p-2 rounded"
            placeholder="0"
          />
        </div>

        <button
          type="submit"
          className="w-full bg-blue-600 text-white font-bold py-2 rounded hover:bg-blue-700"
        >
          Process Transaction
        </button>
      </form>
    </div>
  );
}
