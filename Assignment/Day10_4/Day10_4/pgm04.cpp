#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cout << "Enter number:";
    cin >> n;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    cout << "No of ones:" << count << endl;
    return 0;
}
