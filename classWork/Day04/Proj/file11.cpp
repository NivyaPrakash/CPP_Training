#include<iostream>
#include "file11.h"
using namespace std;
void stringHandling()
{
	char ch = 'A';
	char fName[20];
	string sName;

	cout << "ch value" << ch << endl;
	cout << "Enter the first name" << endl;
	cin >> fName;
	cout << "Enter te second name" << endl;
	cin >> sName;
	cout << "\n My name is" << fName << " " << sName << endl;


	char Name[6] = "Hello";
	cout << sizeof(Name) << endl;
	cout << "string Length:" << strlen(Name) << endl;

	cout << Name << endl;			        	

	for (int i = 0;i < sizeof(Name);i++)
		cout << Name[i] << endl;



}
