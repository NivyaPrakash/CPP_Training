//Write a Program to Print the Maximum Value of an Unsigned int Using One's Complement (~) Operator
// C++ program to print maximum value of
// unsigned int.
#include <iostream>
using namespace std;
int main()
{
    unsigned int max;
    max = 0;
    max = ~max;

    cout << "Max value : " << max;

    return 0;
}