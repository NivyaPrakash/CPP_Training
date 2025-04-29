#include<iostream>
using namespace std;

int fibo(int);


int main()
{
	int n;
	cout << "Enter no:";
	cin >> n;
	fibo(n);
}

int fibo(int n)
{
	return fibo(n - 1) + fibo(n - 2);
}