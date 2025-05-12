//Write a Program to Count the Number of Vowels
#include<iostream>
#define MAX 100
using namespace std;

int main()
{
	char str[MAX];
	int count = 0;
	cout << "Enter the string:" << endl;
	cin.getline(str, MAX);
	char ch[] = { 'A','E','I','O','U','a','e','i','o','u' };
	int n = sizeof(ch) / sizeof(ch[0]);
	for (int i = 0;i <= strlen(str);i++)
	{
		for (int j = 0;j <= n;j++)
		{
			if (str[i] == ch[j])
			{
				count++;
				break;
			}
		}
	}
	cout << count;
	return 0;
}