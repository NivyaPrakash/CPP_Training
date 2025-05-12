//Write a Program to Find the Sum of the First N Natural Numbers
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout << "Enter number:" << endl;
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		sum = sum + i;
	}cout << "sum:" << sum << endl;
	return 0;
}