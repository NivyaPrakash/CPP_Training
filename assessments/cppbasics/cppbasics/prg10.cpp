//Write a Program to Remove the Vowels from a String
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX];
	char str2[MAX];
	int j = 0;
	cout << "Enter a string:" << endl;
	cin.getline(str, MAX);
	for (int i = 0;i <= strlen(str);i++)
	{
		switch (str[i])
		{
		case 'A':
		case'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			break;
		default:
			str2[j++] = str[i];
		}
	}
	str2[j] = '\0';
	cout << str2;
	return 0;
}