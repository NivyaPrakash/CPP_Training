#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size:" << endl;
    cin >> n;  
    int arr[20];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxsize = arr[n - 1];
    cout << maxsize << " ";  
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxsize) {
            cout << arr[i] << endl;
            maxsize = arr[i]; 
        }
    }

    cout << endl;
    return 0;
}
