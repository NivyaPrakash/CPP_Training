//C++ Program To Check Whether Number is Even Or Odd
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number:" << endl;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "Even Number" << endl;
	}
	else
	{
		cout << "Odd number" << endl;
	}
	return 0;
}