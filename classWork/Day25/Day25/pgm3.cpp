#include <iostream>
#include <string>
using namespace std;

#define MAX 100

struct Product {
    int productId;
    string productName;
    int quantity;
    float price;
};

void addProduct(Product pro[], int& count) {
    if (count >= MAX) {
        cout << "Inventory is full.\n";
        return;
    }
    cout << "Enter Product ID: ";
    cin >> pro[count].productId;
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, pro[count].productName);
    cout << "Enter Quantity: ";
    cin >> pro[count].quantity;
    cout << "Enter Price: ";
    cin >> pro[count].price;
    count++;
    cout << "Product added successfully.\n";
}

void updateProduct(Product pro[], int count) {
    int id;
    cout << "Enter Product ID to update: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (pro[i].productId == id) {
            cout << "Enter new Product Name: ";
            cin.ignore();
            getline(cin, pro[i].productName);
            cout << "Enter new Quantity: ";
            cin >> pro[i].quantity;
            cout << "Enter new Price: ";
            cin >> pro[i].price;
            cout << "Product updated successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

void deleteProduct(Product pro[], int& count) {
    int id;
    cout << "Enter Product ID to delete: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (pro[i].productId == id) {
            for (int j = i; j < count - 1; j++) {
                pro[j] = pro[j + 1];
            }
            count--;
            cout << "Product deleted successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

void searchProduct(Product pro[], int count) {
    int id;
    cout << "Enter Product ID to search: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (pro[i].productId == id) {
            cout << "Product Found:\n";
            cout << "ID: " << pro[i].productId << endl;
            cout << "Name: " << pro[i].productName << endl;
            cout << "Quantity: " << pro[i].quantity << endl;
            cout << "Price: " << pro[i].price << endl;
            return;
        }
    }
    cout << "Product not found.\n";
}

void displayProducts(Product pro[], int count) {
    if (count == 0) {
        cout << "Inventory is empty.\n";
        return;
    }
    cout << "\nID\tName\t\tQuantity\tPrice\n";
    for (int i = 0; i < count; i++) {
        cout << pro[i].productId << "\t"
            << pro[i].productName << "\t\t"
            << pro[i].quantity << "\t\t"
            << pro[i].price << endl;
    }
}

