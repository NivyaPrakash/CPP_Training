#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void printKMax(int arr[], int n, int k) {
    deque<int> dq;

   
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();  
        }
        dq.push_back(i);  
    }

   
    cout << arr[dq.front()] << " ";

    
    for (int i = k; i < n; i++) {
        
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);  

        
        cout << arr[dq.front()] << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
