//Write a Program to Find the Length of the String Without using strlen() Function
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX];
	int count = 0;
	cout << "Enter string:" << endl;
	cin.getline(str,MAX);
	while (str[++count]);
	cout << count;
	return 0;
}