#include<iostream>
using namespace std;

int newNum(int, int);

int main()
{
	int a, b;
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	int res=newNum(a, b);
	cout << res;
	return 0;
}

int newNum(int a,int b)
{
	int r;
	r = a % 10;
	while (b >= 10)
	{
		b /= 10;
	}
	int f = b;
	return (r * 10) + f;
}