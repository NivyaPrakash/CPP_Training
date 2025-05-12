//Write a Program to Check if Two Strings are Anagram or Not
#include<iostream>
#define MAX 100 
using namespace std;
int main()
{
	char str[MAX];
	bool flag = true;

	cout << "Enter first string:" << endl;
	cin.getline(str, MAX);
	char str2[MAX];
	cout << "Enter second string:" << endl;
	cin.getline(str2, MAX);
	int freq[26];

	for (int i = 0;i < 26;i++)
	{
		freq[i] = 0;
	}if (strlen(str) == strlen(str2))
	{
		for (int i = 0;i < strlen(str);i++)
		{
			freq[str[i] - 'a']++;
			freq[str2[i] - 'a']--;
		}
		for (int i = 0;i < 26;i++)
		{
			if (freq[i] > 0 || freq[i] < 0)
			{
				flag = false;
				break;
			}
		}
	}
	else
		flag = false;
	if (flag == false)
	{
		cout << "Not Anagram";
	}
	else {
		cout << "Anagram";
	}
}