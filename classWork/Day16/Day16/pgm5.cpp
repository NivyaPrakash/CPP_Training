#include<iostream>
using namespace std;
int main()
{
	int n=6, i, j, k;
	cout << "enter no:" << endl;
	cin >> n;
	for (i = 0;i < n / 2;i++)
	{
		for (j = 0;j < n / 2;j++)
			cout << "*";
		
		for (j = 0;j < n / 2;j++)
			cout << "*";
		cout << endl;
		for (j = 0;j < n / 2;j++)
			cout << "*";
		for (j = 0;j < n / 2;j++)
			cout << "*";
		cout << endl;

	}
}