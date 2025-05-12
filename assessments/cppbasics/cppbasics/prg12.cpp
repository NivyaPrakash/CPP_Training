//Write a Program to Remove Spaces From a String
#include<iostream>
#include<cstring>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX];
	int j = 0;
	cout << "Enter string" << endl;
	cin.getline(str, MAX);
	char str2[MAX] = { 0 };
	for (int i = 0;i <= strlen(str);i++)
	{
		if (str[i] != ' ')
		{
			str2[j++] = str[i];
		}
	}str[j] = '\0';
	cout << str2;
	return 0;
}