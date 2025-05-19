#include<iostream>
using namespace std;
int vowels(char*, int);


int main()
{


	char s[20];
	cin.getline(s, 1024);
	int n = strlen(s);
	int res=vowels(s, n);
	cout <<"count:"<< res;

}

int vowels(char* ptr, int n)
{
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		switch (ptr[i])
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			count++;
			break;
		default:
			break;

		}
	}return count;
}