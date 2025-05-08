#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter no";
	cin >> n;
	for (int i = n;i >= 0;i--)
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
	for (int i = 1;i <= n;i++)
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