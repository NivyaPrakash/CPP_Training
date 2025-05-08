#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int count = 0,  i;
	char str[MAX];
	
	cout << "Enter string:";
	cin.getline(str, MAX);
	int freq[26];
	for (int i = 0;i <26;i++)
	{
		freq[i] = 0;
	}
	for (int i = 0;i <= strlen(str);i++)
	{
		freq[str[i] - 'a']++;
	}
	for (int i = 0;i <26;i++)
	{
		if (freq[i] > 0)
		{
			cout << char(i + 'a') << ":" << freq[i]<<endl;
		}
	}


}