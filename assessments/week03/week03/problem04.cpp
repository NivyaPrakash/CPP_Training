#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[100];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        sum =sum+ a[i];
    }
    int lsum = 0, rsum = sum;
    for (int i = 0; i < n; ++i) {
        rsum =rsum- a[i];
        if (lsum == rsum) {
            cout << i << endl;
            return 0;
        }
        lsum =lsum+ a[i];
    }
 cout << -1 << endl;
    return 0;
}
