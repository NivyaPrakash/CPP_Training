#include <iostream>
using namespace std;

void energyLev(int);

int main() {
    int n; 
    cout << "Enter energy:" << endl;
    cin >> n;
    energyLev(n);  
}

void energyLev(int e) {

    if (e <= 0) {
        return;
    }
    cout << e << endl;
    energyLev(e / 2);
}