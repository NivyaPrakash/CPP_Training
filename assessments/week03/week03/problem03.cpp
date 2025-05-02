#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size:";
    cin >> n;
    int a[100];
    cout << "Enter elements:";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i]) {
                count++;
            }
        }
        cout << count << endl;;
    }

    cout << endl;
    return 0;
}
