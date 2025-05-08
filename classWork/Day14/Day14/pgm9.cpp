#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	char str[20];
	cout << "Enter string:";
	cin.getline(str, 20);
	for (int i = 0;i < 20;i++)
	{
		switch (str[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			count++;


		}
		
	}cout << "count:"<<count;
}