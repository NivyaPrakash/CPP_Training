#include<iostream>
using namespace std;
int main()
{
	int n,r,p=1,o=1,e=1;
	cout << "Enter the number:" << endl;
	cin >> n;
	for (int i = 0;i <= 5;i++)
	{
		r = n % 10;
		n = n / 10;
		if (p % 2 == 0)
		{
			e = e * r;
		}
		else
		{
			o = o * r;
		}
		n = n / 10;
		p++;
	}
	if (e == 0)
	{
		cout << "yes";
	}
	else
	{
		cout << "No";
	}
}