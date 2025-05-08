#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	char str[30] = { 0};
	char str2[30];
	cout << "Enter string:";
	cin.getline(str, 30);
	int j = 0 , i = 0;
while( str[i])
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
			break;
		default:
			str2[j++] = str[i];
			


		}
		i++;
	}
	str2[j] = 0;

		cout << str2 << endl;

}