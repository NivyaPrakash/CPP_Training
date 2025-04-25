#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	int fact= factorial(n);
	cout << "fact:" << fact;
	return 0;
}

int factorial(int n)
{
	int fact = 1;
	for (int i = 1;i <= n;i++)
	{
		fact= fact * i;
	}
	return fact;
}