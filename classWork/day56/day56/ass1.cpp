#include <iostream>
#include <vector>
using namespace std;

vector<int> stablePartition(const vector<int>& arr) {
    vector<int> negatives;
    vector<int> positives;

    for (int num : arr) {
        if (num < 0)
            negatives.push_back(num);
        else
            positives.push_back(num);
    }

   
    negatives.insert(negatives.end(), positives.begin(), positives.end());
    return negatives;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> result = stablePartition(arr);

    for (int num : result)
        cout << num << " ";

    cout << endl;
    return 0;
}
