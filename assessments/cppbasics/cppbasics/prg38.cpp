//Write a Program to Calculate the Length of the String Using Recursion
#include<iostream>
#define MAX 100
int stringLength(char *);
using namespace std;

int main()
{
    char str[MAX];
    cout << "Enter string" << endl;
    cin.getline(str, MAX);
    cout<<stringLength(str);
    return 0;
}


int stringLength(char* str)
{
    if (*str == '\0')
        return 0;
    else
        return 1 + stringLength(str + 1);
}
