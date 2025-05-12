//Write a Program to Check Whether a Character is a Vowel or Consonant
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter character:" << endl;
	cin >> ch;
	switch (ch)
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
		cout << "The character is vowel" << endl;
		break;
	default:cout << "The character is consonant" << endl;
	}
	return 0;
}