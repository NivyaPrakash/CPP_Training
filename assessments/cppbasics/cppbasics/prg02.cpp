//Write a Program to Find the Greatest of the Three Numbers
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3,high;
	cout << "enter three numbers" << endl;
	cin >> num1>> num2>> num3;
	high = num1;
	if (num1 > high)
		high = num1;
	if (num2 > high)
		high = num2;
	if (num3 > high)
		high = num3;
	cout <<"Greatest:"<< high;
	return 0;
}