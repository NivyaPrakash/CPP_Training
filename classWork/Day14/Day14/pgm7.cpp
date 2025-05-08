#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "enter a character";
	cin >> ch;
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch<='z'))
	{
		cout << "alphabet";
	}
	else
	{
		cout << "Not aplhabet";
	}
}