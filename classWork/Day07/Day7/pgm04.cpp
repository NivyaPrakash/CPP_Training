#include<iostream>
using namespace std;
int main()
{

	int i, sum = 0, n,pro=1,r;
	cout << "Enter the number:" << endl;
	cin >> n;
	for (i = 0;i < 5;i++)
	{
		r = n % 10;
		n = n / 10;
		sum = sum + r;
		if (r != 0)
		{
			pro = pro * r;
		}

	}
	cout << sum << endl;;
	cout << pro;
}

