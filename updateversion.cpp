#include <iostream>
#include <string> // Added for safety
using namespace std;

class laptop {
private:
    string brand;
    float price;
    string model;
    int ram;

public:
    // Using an initialization list here
    laptop(string b, float p, string m, int r) : brand(b), price(p), model(m), ram(r) {
        display();
    }

    void display() {
        cout << "\n--- Laptop Details ---" << endl;
        cout << "Brand: " << brand << " | Model: " << model << endl;
        cout << "RAM: " << ram << "GB | Price: $" << price << endl;
        cout << "----------------------\n" << endl;
    }

    void applyDiscount(float percentage) {
        if (percentage > 0 && percentage <= 100) {
            price -= price * (percentage / 100);
            cout << "Applied " << percentage << "% discount." << endl;
        }
    }

    float getPrice() { return price; }

    ~laptop() {
        cout << "Memory released for: " << brand << endl;
    }
};

int main() {
    laptop hp("HP", 2000, "Pavilion", 16);

    hp.applyDiscount(10); // Task 2: Apply 10% discount
    cout << "New price after discount: " << hp.getPrice() << endl;

    return 0;
}