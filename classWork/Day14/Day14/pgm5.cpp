#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "enter a character";
	cin >> ch;
	cout << "ASCII is:" << int(ch) << endl;
	printf("%d\n", int(ch));

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout << "The character is vowel"<<endl;
	}
	else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		cout << "The character is vowel"<<endl;
	}
	else {
		cout << "The character is consonant"<<endl;
	}

}