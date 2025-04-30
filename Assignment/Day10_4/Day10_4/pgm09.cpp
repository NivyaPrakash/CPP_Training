#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }

    if (isPrime(product)) {
        cout << "open" << endl;
    }
    else {
        cout << "not open." << endl;
    }

    return 0;
}
