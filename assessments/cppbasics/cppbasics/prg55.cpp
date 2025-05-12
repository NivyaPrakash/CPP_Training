//Write a program in C++ that converts kilometers per hour to miles per hour.
#include<iostream>
using namespace std;

int main() {
    float kmhour, mileshour;
    cout << "Enter speed in kilometers per hour: ";
    cin >> kmhour;
    mileshour = kmhour * 0.621371;
    cout  << " miles per hour." << mileshour << endl;
    return 0;
}
