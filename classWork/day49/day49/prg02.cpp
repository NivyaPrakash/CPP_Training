#include<iostream>
using namespace std;
#include<string>

void normalize_sentence(char* str)
{
	int i = 0,j = 0,k = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] == ' ')
		{
			for ( j = i + 1;str[j] == ' ';j++);
			for ( k = i+1;str[j] != '\0';k++, j++)
					str[k] = str[j];
				str[k] = '\0';
		}
	}
}

int main()
{
	char s[] = "hello    world";
	normalize_sentence(s);
	cout << s;
}