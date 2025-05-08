#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "enter a character";
	cin >> ch;
	cout << "ASCII is:" << int(ch) << endl;
	printf("%d\n", int(ch));
	switch (ch)
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
	case 'U':cout << "vowel" << endl;
		break;
	default:cout << "consonaant" << endl;
		

	}
	return 0;
}