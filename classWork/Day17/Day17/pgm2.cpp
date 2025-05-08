#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int count = 0, i;
	bool flag = true;;
	char str[MAX];
	char str2[MAX];
	cout << "Enter string:";
	cin.getline(str, MAX);
	cout << "Enter string:";
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