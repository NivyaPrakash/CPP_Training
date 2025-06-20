#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char ch = 'A';
	for (int i = 0;i <= n;i++)
	{
		for (int j = n - i;j <= 1;j--)
		{
			cout << " ";
		}
		for (int k = 1;k <= i;k++)
		{
			cout << ch;
			ch++;
		}cout << endl;
	}
}