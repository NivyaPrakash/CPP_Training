#include <iostream>
using namespace std;

int main() {
    int num,small;
    cout << "Enter a number: ";
    cin >> num;
    small = 9;
    while (num > 0) {
        int d = num % 10;
        
        if (d < small) {
            small = d;
        }
        num /= 10;
    }

    cout << "The smallest digit is: " << small << endl;

    return 0;
}
