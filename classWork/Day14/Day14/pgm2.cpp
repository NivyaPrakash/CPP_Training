#include<iostream>
using namespace std;
int main()

 {
	int a, b, c, d, e;
	cout << "Enter the 5 number" << endl;
	cin >> a >> b >> c >> d >> e;
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
				{
					cout << a << "is large" << endl;
				}
			}
		}
	}
	else if (b > c)
	{
		if (b > d)
		{
			if (b > e)
			{
				cout << b << "is large";
			}
		}
	}
	else if (c > d)
	{
		if (c > e)
		{
			cout << c << "is large";
		}
	}
	else if (d > e)
	{
		cout << d << "is larger";
	}
	else
	{
		cout << e << "is larger";
	}
}
