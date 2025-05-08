#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int count = 0;
	char str[30] = { 0 };
	char str2[30];
	cout << "Enter string:";
	cin.getline(str, 30);
	int j = 0, i = 0;
	for (i = 0;i < 30;i++)
	{
		if (str[i] == ' ')
			continue;
		else {
			str2[j++] = str[i];
		}
	}str[j] = 0;
	cout << str2;
}