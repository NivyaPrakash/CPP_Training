#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int res = 1;
    while (res <= n) {
        res *= 2;
    }
    res /= 2;

    cout << "power is: " << res << endl;

    return 0;
}
