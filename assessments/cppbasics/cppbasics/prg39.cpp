//Write a Program to Calculate the Factorial of a Number Using Recursion
#include<iostream>
using namespace std;
int facto(int);
int main()
{
	int n;
	cout << "enter number" << endl;
	cin >> n;
	int f=facto(n);
	if (f < 0)
	{
		cout << "invalid factorial" << endl;
	}
	else
	{
		cout << "Factorial is:" << f << endl;
	}
}


int facto(int n)
{
	if ((n == 0) || (n == 1))
		return 1;
	return n * facto(n - 1);
}