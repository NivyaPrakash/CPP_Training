#include<iostream>
using namespace std;
int main()
{
	int a, b, c,d,e;
	cout << "Enter the 5 number" << endl;
	cin >> a >> b >> c>>d>>e;
	if (a > b && a > c && a>d && a>e)
	{
		cout << a << "is larger" << endl;
	}
	else if (b > c && b>d && b>e)
	{
		cout << b << "is larger";
	}
	else if (c > d && c > e)
	{
		cout << c << "is larger";
	}
	else if (d > e)
	{
		cout << d << "is larger";
	}
	else {
		cout << e << "is larger";

	}
	return 0;
}