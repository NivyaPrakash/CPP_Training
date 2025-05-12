//Write a Program to Find a Leap Year or Not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter year:" << endl;
	cin >> year;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		cout << "Leap year" << endl;
	}
	else
	{
		cout << "Not leap year" << endl;
	}
	return 0;
}
