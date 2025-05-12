//Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter two numbers:" << endl;
	cin >> a >> b;
	if ((a ^ b) == 0)
	{
		cout << "Numbers are equal"<<endl;
	}
	else
	{
		cout << "Numbers are not equal" << endl;
	}
	return 0;
}