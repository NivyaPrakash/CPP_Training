#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int count_zero = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == 0)
            count_zero++;

    for (int i = 0; i < count_zero; ++i)
        arr[i] = 0;
    for (int i = count_zero; i < n; ++i)
        arr[i] = 1;

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
