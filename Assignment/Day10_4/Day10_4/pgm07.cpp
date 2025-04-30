#include <iostream>
using namespace std;

int main() {
    int n, digit;

    cout << "Enter the number: ";
    cin >> n;

    while (n != 0) {
        digit = n % 10;
        if (digit != 0) {
            if (digit % 2 == 0) {
                cout << "The first non-zero digit is even." << endl;
            }
            else {
                cout << "The first non-zero digit is odd." << endl;
            }
            break;
        }
        n /= 10;
    }

    return 0;
}
