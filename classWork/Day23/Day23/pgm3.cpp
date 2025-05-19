#include<iostream>
using namespace std;
void display(char[]);
int main()
{
	char s[] = "nivya";
	display(s);
	return 0;
}


void display(char name[])
{
	while (*name != '\0')
	{
		cout << *name++;
		
	}cout << endl;
}