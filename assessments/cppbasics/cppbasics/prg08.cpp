//Write a Program to Toggle Each Character in a String
#include<iostream>
#define CAP 100
#include<cstring>
using namespace std;
int main()
{
	char str[CAP];
	cout << "Enter string:" << endl;
	cin.getline(str, CAP);
	for (int i = 0;str[i] != '\0';i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}cout << str;
}