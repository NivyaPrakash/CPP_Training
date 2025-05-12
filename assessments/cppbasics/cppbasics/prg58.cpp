//string equal or not using strcmp 
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100];
	char str2[100];
	cout << "Enter first string:" << endl;
	cin >> str1;
	cout << "Enter the second string:" << endl;
	cin >> str2;
	if (strcmp(str1, str2) == 0)
	{
		cout << "string equal";
	}
	else
	{
		cout << "not equal";
	}
}