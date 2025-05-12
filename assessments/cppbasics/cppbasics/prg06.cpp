//Write a Program to Print Check Whether a Character is an Alphabet or Not
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character:" << endl;
	cin >> ch;
	if ((ch >= 'a' && ch<='z') || (ch >= 'A' && ch<='Z'))
	{
		cout << "The character is an alphabet" << endl;
	}
	else
	{
		cout << "The character is not alphabet" << endl;
	}
	return 0;
}