#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_str;
    cin >> input_str;

    int position_are = -1, position_i = -1;

    for (int i = 0; i < input_str.length(); i++) {
        if (input_str[i] == 'a' && input_str[i + 1] == 'r' && input_str[i + 2] == 'e' && position_are == -1) {
            position_are = i;
        }
        if (input_str[i] == 'i' && position_i == -1) {
            position_i = i;
        }
    }

    int sum_positions = position_are + position_i;
    cout << "Sum = " << sum_positions << endl;

    return 0;
}




