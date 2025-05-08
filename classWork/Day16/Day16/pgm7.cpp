#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter no";
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		for (int j = 1;j <= n - i;j++)
		{
			cout << " ";
		}
		for (int k = 1;k <= i;k++)
		{
			cout << "*";
		}
		for (int l = 1;l <= i - 1;l++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n - 1;i >= 1;i--)
	{
		for (int j = 1;j <= n - i;j++)
		{
			cout << " ";
		}
		for (int k = 1;k <= i;k++)
		{
			cout << "*";
		}
		for (int l = 1;l <= i - 1;l++)
		{
			cout << "*";
		}
		cout << endl;
	}
}