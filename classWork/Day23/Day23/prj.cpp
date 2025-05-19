#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct Product {
    int productId;
    string productName;
    int quantity;
    float price;
};

void addProduct(Product inventory[], int& count) {
    if (count >= MAX) {
        cout << "Inventory is full.\n";
        return;
    }
    cout << "Enter Product ID: ";
    cin >> inventory[count].productId;
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, inventory[count].productName);
    cout << "Enter Quantity: ";
    cin >> inventory[count].quantity;
    cout << "Enter Price: ";
    cin >> inventory[count].price;
    count++;
    cout << "Product added successfully.\n";
}

void updateProduct(Product inventory[], int count) {
    int id;
    cout << "Enter Product ID to update: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (inventory[i].productId == id) {
            cout << "Enter new Product Name: ";
            cin.ignore();
            getline(cin, inventory[i].productName);
            cout << "Enter new Quantity: ";
            cin >> inventory[i].quantity;
            cout << "Enter new Price: ";
            cin >> inventory[i].price;
            cout << "Product updated successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

void deleteProduct(Product inventory[], int& count) {
    int id;
    cout << "Enter Product ID to delete: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (inventory[i].productId == id) {
            for (int j = i; j < count - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            count--;
            cout << "Product deleted successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

void searchProduct(Product inventory[], int count) {
    int id;
    cout << "Enter Product ID to search: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (inventory[i].productId == id) {
            cout << "Product Found:\n";
            cout << "ID: " << inventory[i].productId << endl;
            cout << "Name: " << inventory[i].productName << endl;
            cout << "Quantity: " << inventory[i].quantity << endl;
            cout << "Price: " << inventory[i].price << endl;
            return;
        }
    }
    cout << "Product not found.\n";
}

void displayProducts(Product inventory[], int count) {
    if (count == 0) {
        cout << "Inventory is empty.\n";
        return;
    }
    cout << "\nID\tName\t\tQuantity\tPrice\n";
    for (int i = 0; i < count; i++) {
        cout << inventory[i].productId << "\t"
            << inventory[i].productName << "\t\t"
            << inventory[i].quantity << "\t\t"
            << inventory[i].price << endl;
    }
}

int main() {
    Product inventory[MAX];
    int count = 0;
    int choice;

    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Product\n2. Update Product\n3. Delete Product\n4. Search Product\n5. Display All\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addProduct(inventory, count); break;
        case 2: updateProduct(inventory, count); break;
        case 3: deleteProduct(inventory, count); break;
        case 4: searchProduct(inventory, count); break;
        case 5: displayProducts(inventory, count); break;
        case 6: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
