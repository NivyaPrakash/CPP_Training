#include<iostream>
#include<cmath> 
using namespace std;
int armstrong(int);
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    armstrong(n); //call function

    return 0;
}
int armstrong(int n)
{
    int num;
    num = n;
    int d, sum = 0;
    int digits = 0;
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;  // remove the last digit
        digits++;  // increment the digit count
    }


    while (n > 0) {
        d = n % 10;  // seperated the digits
        sum = sum + pow(d, digits);  // Add digit to power of numDigits and sum
        n = n / 10;  // remove the last digit
    }
    cout << "sum is" << sum;
    if (sum == num) {  // check sum is equal aoriginal number
        cout << " Armstrong number" << endl;
    }
    else {
        cout << " not Armstrong number" << endl;
    }
    return sum;
}