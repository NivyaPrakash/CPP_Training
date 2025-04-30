#include <iostream>
using namespace std;

int main() {
    int n;
    int number = 1, sum = 1;
    cout << "Enter the number: "<<endl;
    cin >> n;
    for (int i = 1; i < n; i++) {
        number *= 2;
        sum += number;
    }

    cout << "sum : " << sum << endl;
    return 0;
}
