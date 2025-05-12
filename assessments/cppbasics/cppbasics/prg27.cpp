//	Write a Program to Print a Diamond Pattern
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cout << "enter number:" << endl;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n - i;j++)
			cout << " ";
		for (k = 1;k <= i;k++)
			cout << "*";
		for (l = 1;l <= i - 1;l++)
			cout << "*";
		cout << endl;

	}
	for (i = n-1;i >=0;i--)
	{
		for (j = 1;j <= n - i;j++)
			cout << " ";
		for (k = 1;k <= i;k++)
			cout << "*";
		for (l = 1;l <= i - 1;l++)
			cout << "*";
		cout << endl;

	}
}