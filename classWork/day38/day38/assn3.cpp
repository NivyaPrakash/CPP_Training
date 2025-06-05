#include <iostream>
#include <set>
using namespace std;

multiset<int> inventory;

void insert(int price)
{
    inventory.insert(price);
}

void count(int value)
{
    auto it = inventory.lower_bound(value);
    int c = distance(it, inventory.end());
    cout << value << "-> " << c << endl;
}

void eraseOne(int value) {
    auto it = inventory.find(value);
    if (it != inventory.end()) {
        inventory.erase(it); // Erase only one occurrence
    }
}

void display() {
    cout << "Inventory: ";
    for (int price : inventory)
        cout << price << " ";
    cout << endl;
}


int main()
{
    insert(100);
    insert(150);
    insert(200);
    insert(150);
    insert(250);

    count(150);
    eraseOne(150);
    display();
}