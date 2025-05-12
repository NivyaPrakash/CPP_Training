//Write a Program to Find the Factorial of a Number Using Loops
#include<iostream>
using namespace std;
int main()
{
	int fact = 1;
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		fact = fact*i;
	}cout << "Factorial of number:" << fact<< endl;
	return 0;
}