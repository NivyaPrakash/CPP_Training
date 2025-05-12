//Write a Program to Swap the Values of Two Variables Without Using any Extra Variable
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter 2 number:" << endl;
	cin >> a >> b;
	cout << "before swap:" << "a:" << a<<" " << "b:" << b << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout<< "after swap:" << "a:" << a << " " << "b:" << b << endl;
}