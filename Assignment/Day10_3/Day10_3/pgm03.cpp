#include<iostream>
using namespace std;

bool leapyr(int);

int main()
{
	int year;
	cout << "Enter the year:" << endl;
	cin >> year;
	if (leapyr(year)) {
		cout << "The year is leap year" << endl;
	}
	else {
		cout << "the year is not leap year" << endl;
	}
	
}

bool leapyr(int year)
{
	
	if ((year / 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}
	else {
		return false;
	}
}