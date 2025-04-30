#include<iostream>
using namespace std;
int middle(int, int, int);
int main()
{
	int a, b, c;
	cout << "Enter 3 numbers" << endl;
	cin >> a >> b >> c;
	int res=middle(a, b, c);
	cout << res;
}

int middle(int a, int b, int c)
{
	if (((a > b) && (a < c)) || ((a < b) && (a > c)))
	{
		return a;
	}
	else if ( ((b > a && b < c) || (b < a && b > c)))

	{
		return b;
	}
	else
	{
		return c;
	}

		
}