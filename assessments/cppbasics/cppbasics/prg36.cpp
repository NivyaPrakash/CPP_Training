// Write a C++ Program to Print the Given String in Reverse Order Using Recursion

#include<iostream>
using namespace std;
#define MAX 100
void printReverseString(char[], int);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	printReverseString(str, strlen(str) - 1);
	return 0;
}

void printReverseString(char str[], int i)
{
	if (i == 0)
	{
		cout << str[i];
		return;
	}
	else
	{
		cout << str[i];
		printReverseString(str, i - 1);
	}
}