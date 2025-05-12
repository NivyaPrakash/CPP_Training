//Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
#include<iostream>
using namespace std;
int gcd(int, int);
int main()
{
	int a, b;
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	int res = gcd(a, b);
	cout << res;
	int lcm = abs(a * b) / res;
	cout << "LCM=" << lcm << endl;
}

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a=b;
		b = r;
	}return a;
}