#include<iostream>
using namespace std;
int main()
{
	int i, j;
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	for (i = 0;i < n;i++)
	{
		for (j = n - 1 - i;j >= 0;j--)
		{
			cout << " ";
		}
		for(char ch='A',j=n;j>=n-i;j--,ch++)
		{
			cout << ch;

		}
		for (char ch = 'A' + i - 1, j = n;j > n - i;j--, ch--)
		{
			cout << ch;
		}
		cout << endl;
	}
}