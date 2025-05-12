//Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
#include<iostream>
#include<cmath> 
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int max = (a + b + abs(a - b)) / 2;
    int min= (a + b - abs(a - b)) / 2;

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
