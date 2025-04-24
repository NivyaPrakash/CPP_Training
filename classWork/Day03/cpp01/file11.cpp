#include<iostream>
using namespace std;
int main()
{
	int _id = 0;
	int itr1 = 101, itr2 = 0; //iteration variable.variable name have proper naming convention.
	char firstName[100] = { '\0' }, secondName[100] = { '\0' };
	memset(firstName, '\0', sizeof(firstName));
	for (int itr2 = 0;itr2 < 10;itr2++)
		cout << itr2 << endl;
	cout << itr2 << endl;
	strcat(firstName, "nivya");
	cout << firstName << endl;
	register int i;
	for (i = 0;i < 100;i++)
		cout << i << endl;
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;


	{
		int itr1 = 202;
		cout << itr1 << endl;
		cout << firstName;
	}
	cout << itr1 << endl;
	return 0;

	
}