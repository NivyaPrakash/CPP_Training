#include<iostream>
#define CAP 30
#include<cstring>
using namespace std;
void spaceRemove(char []);
int main()
{
	int count = 0;
	char str[CAP] = { 0 };
	
	cout << "Enter string:";
	cin.getline(str, CAP);
	int j = 0, i = 0;
	spaceRemove(str);
}

	void spaceRemove(char str[])
	{
		int j = 0,i=0;
		char str2[CAP] = { 0 };
		for ( i = 0;i <strlen(str);i++)
		{
			if (str[i] == ' ')
				continue;
			else {
				str2[j++] = str[i];
			}
		}str[j] = '\0';
		cout << str2;
	}
