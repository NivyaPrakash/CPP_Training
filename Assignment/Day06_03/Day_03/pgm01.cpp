//pattern
//*****
//*****
//*****
//
#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout << "enter number:" << endl;
	cin >> n;
	for (i = 1;i <= 5;i++)
	{
		for (j = 1;j <= n;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}