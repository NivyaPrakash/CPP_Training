//Write a Program to Print a Triangle Star Pattern
#include<iostream>
using namespace std;
int main()
{
	int n, i, j,k;
	cout << "Enter number:" << endl;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n - i;j++)
			cout << " ";
		for (k = 1;k <= i;k++)
			cout << "* ";
		cout << endl;
	}
}