#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int index = 0;

    for (int i = 0; i < n; ++i)
        if (arr[i] != 0)
            arr[index++] = arr[i];

    while (index < n)
        arr[index++] = 0;

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
