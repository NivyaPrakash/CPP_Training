//Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include<iostream>
    using namespace std;

    int main() {
        float fahrenheit, celsius;
        cout << "Enter  Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout  << " Celsius." << celsius << endl;
        return 0;
    }

