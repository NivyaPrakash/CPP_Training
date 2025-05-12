//Write a Program to Print a Simple Pyramid Pattern
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout << "Enter number:" << endl;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
		{
			cout << "*";
		}cout << endl;
	}
}