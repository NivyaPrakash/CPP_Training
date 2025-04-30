#include<iostream>
using namespace std;


bool sumInt(int, int);

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (sumInt(a, b)) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }

    return 0;
}

bool sumInt(int a, int b) {
    int sum = a + b;
    if (sum % 2 == 0)
        return true;
    else
        return false;
}