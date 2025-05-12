//Write a Program to Find the Nth Term of the Fibonacci Series
#include<iostream>
int fibo(int);
using namespace std;
int main()
{
	int n;

	cout << "Enter number:" << endl;
	cin >> n;
	int res = fibo(n);
	cout << res;
	return 0;
}


int fibo(int n)
{
	int a = 0, b = 1, fib;
	for (int i = 0;i <= n;i++)
	{
		 fib = a + b;
		a = b;
		b = fib;
	}return fib;
}