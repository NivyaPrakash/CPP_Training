#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
		
		
	cout << "no:" << endl;
	cin >> n;
	int k = 2 * n - 2;
	for (int i = 0;i < n;i++)
	{
		for (j = 0;j < k;j++)
			cout << " ";
		k = k - 1;
		for (int j = 0;j<=i;j++)
			cout << "* ";
		cout << endl;

	}
}