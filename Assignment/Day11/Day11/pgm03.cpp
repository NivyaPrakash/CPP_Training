#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size:" << endl;
    cin >> n;
int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int totalsum = 0;
    for (int i = 0; i < n; i++) {
        totalsum += arr[i];
    }
     int leftsum = 0;
     for (int i = 0; i < n; i++) {
        totalsum -= arr[i];
    if (leftsum == totalsum) {
            cout << i << endl;
            return 0;
        }

        leftsum += arr[i];
    }
     cout << -1 << endl;

    return 0;
}

