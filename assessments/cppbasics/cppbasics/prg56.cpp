//program to check given character is alphabet ,digit  or special character
#include<iostream>
using namespace std;
int main()
{
	char in;
	cout << "Enter the input:" << endl;
	cin >> in;
	if ((in >= 'a' && in <= 'z') || (in >= 'A' && in >= 'Z'))
	{
		cout << "Alphabet" << in;
	}
	else if (in <= 0 && in >= 9)
	{
		cout << "Digit" << in;
	}
	else
	{
		cout << "special character" << endl;
	}
	return 0;
}