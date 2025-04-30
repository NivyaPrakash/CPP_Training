#include<iostream>
using namespace std;


int power(int a, int b) {
    
    if (b == 0) {
        return 1;
    }
    
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter 2 number:" << endl;
    cin >> a >> b;
    int res=power(a, b);
    cout << res;

    return 0;
}
