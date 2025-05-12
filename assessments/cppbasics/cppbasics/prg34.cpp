//Write a Program to Print Floyd's Triangle
#include<iostream>
using namespace std;
int main()
{
	int n, i,k,count=1;
	cout << "Enter number:" << endl;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		for (k = 1;k <= i;k++)
			cout <<count++;
		cout << endl;
	}
}