#include <iostream>
using namespace std;

int main() {
    int a[3] = { 1, 2, 3 };
    int* ptr = nullptr;
    ptr = &a[0];
    cout << *ptr;
    ptr = &a[1];
    cout << a[1];
    ptr = &a[2];
    cout << a[2];
    return 0;
}
