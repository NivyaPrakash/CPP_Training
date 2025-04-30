#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter countdown number: "<<endl;
    cin >> n;
    while (n > 0) {
        cout << n;
        n--;
    }
return 0;
}
