//Write a Program to print an Inverted Pyramid

#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	cout << "Enter number:" << endl;
	cin >> n;
	for (i =n;i >= 0;i--)
	{
		for (j = 1;j <= i;j++)
		{
			cout << "*";
		}cout << endl;
	}
}