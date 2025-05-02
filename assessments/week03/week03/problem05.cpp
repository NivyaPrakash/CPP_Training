#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;  

    int a[100];
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }
    int right = a[n - 1];
    cout << right << " "; 
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >right) {
            cout << a[i] << " ";  
            right = a[i];  
        }
    }

    cout << endl;  
    return 0;
}
