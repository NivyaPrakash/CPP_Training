#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter number: ";
    cin >> n;
     for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
 if (sum == n) {
        cout << "perfect number" << endl;
    }
    else {
        cout << "not perfect number" << endl;
    }
    return 0;
}
