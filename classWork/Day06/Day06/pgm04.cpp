//print the series 1,2,4,8,16,32...
#include<iostream>
using namespace std;
int main()
{
	int i, n = 1, j = 1;
	cout << "Enter the number:" << endl;
	cin >> n;

	for (i = 1;i <= n;i++)
	{
		cout << j << " ";
		j = j * 2;

	}
}

	