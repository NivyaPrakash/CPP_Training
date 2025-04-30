#include<iostream>
using namespace std;


void swapping(int& a, int& b);

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y; 
    swapping(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

void swapping(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}


