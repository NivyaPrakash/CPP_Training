#include <iostream>
#include <string>
using namespace std;



struct Product {
    int productId;
    string productName;
    int quantity;
    float price;
};

void addProduct(Product, int);
void updateProduct(Product, int);
void deleteProduct(Product , int);
void searchProduct(Product, int );
void display(Product, int);
void menu();

void addProduct(Product pro[], int& count) {
    if (count >= 100) {
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

void display(Product pro[], int count) {
    if (count == 0) {
        cout << "Inventory is empty.\n";
        return;
    }
    
    for (int i = 0; i < count; i++) {
        cout << pro[i].productId <<endl;
        cout << pro[i].productName << endl;
        cout << pro[i].quantity << endl;
        cout << pro[i].price << endl;
    }
}

void menu()
{
    cout << "1.add Product" << endl;
    cout << "2.Delete Product" << endl;
    cout << "3.Search product" << endl;
    cout << "4.update product" << endl;
    cout << "5.display" << endl;
 
}

int main() {
    struct Product p[100];
    int count = 0;
    int choice;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
        case 1: 
            addProduct(p,count);
            break;
        case 2:
            deleteProduct(p, count);
            break;
        case 3:
            searchProduct(p, count);
            break;
        case 4:
            updateProduct(p, count);
            break;
        case 5: 
            display(p,count);
            break;
        
        default: cout << "Invalid choice";

        }
    } while (choice != 6);

    return 0;
}

