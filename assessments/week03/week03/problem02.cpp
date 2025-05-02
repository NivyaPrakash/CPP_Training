#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size:" << endl;
    cin >> n; // size of the array
    int arr[100];bool flag;
    cout << "enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        flag = false;
        for (int j = 0; j < n; j++) {
            if (i != j) 
                if(arr[i] == arr[j]) {
                 flag = true;
                    break;
            }
        }
        if (flag==false) {
            cout << arr[i] << endl; // Print element
            break; 
        }
    }

    return 0;
}
