//Write a C++ Program to Check Whether a Number is a Positive or Negative Number
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter number:" << endl;
	cin >> num;
	if (num < 0)
	{
		cout << "Negative Number" << endl;
	}
	else if(num>0)
	{
		cout << "Positive number" << endl;
	}
	else
	{
		cout << "zero" << endl;
	}
	return 0;
}
