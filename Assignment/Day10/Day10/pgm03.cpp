#include<iostream>
using namespace std;

int fibo(int);


int main()
{
	int n;
	cout << "Enter no:";
	cin >> n;
	int ret=fibo(n);
	cout << "The num is:" << ret;
}

int fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}