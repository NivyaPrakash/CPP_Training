//calculate gross salary
#include<iostream>
using namespace std;


int main()
{
	float bSalary, dAllow, hAllow, gSalary;
	cout << "Enter the basic salary:" << endl;
	cin >> bSalary;
	hAllow = (bSalary * 40) / 100;
	dAllow = (bSalary * 20) / 100;
	gSalary = bSalary + hAllow + dAllow;
	cout << "Gross salary=" << gSalary;
}