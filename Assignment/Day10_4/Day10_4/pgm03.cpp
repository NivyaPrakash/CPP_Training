#include <iostream>
using namespace std;
int main() {
    int hr,min;
    cout << "Enter hour: ";
    cin >> hr;
    for (min = 1; min <= 60; min++) {
        if (hr % min == 0) {  
            cout << min;
        }
    }
return 0;
}
