//Write a Program to Check if the Given String is Palindrome or Not
#include<iostream>
#include<cstring>
#define MAX 100
#include<cstring>
using namespace std;
int main()
{
	char str[MAX];
	int j = 0;
	cout << "Enter string:" << endl;
	cin.getline(str, MAX);
	char str2[MAX] = {0};
	for (int i = strlen(str)-1;i >= 0;i--)
	{
		str2[j++] = str[i];
	}str2[j] = '\0';
	if (strcmp(str, str2)==0)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not palindrome" << endl;
	}
}

