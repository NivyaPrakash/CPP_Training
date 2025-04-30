#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;

    cout << "Enter number: ";
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {  
            sum += d;
        }
        n /= 10;
    }

    cout << "sum: " << sum << endl;

    return 0;
}
