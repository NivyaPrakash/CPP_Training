// Write a Program to Check if the Given String is Palindrome or not Using Recursion

#include<iostream>
#include<string.h>
using namespace std;

#define MAX 100

bool checkPalindrome(char[], int, int);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	if (checkPalindrome(str, 0, strlen(str) - 1))
	{
		cout << "Palindrome";
	}
	else
	{
		cout << "Not Palindrome";
	}
	return 0;
}

bool checkPalindrome(char str[], int l, int r)
{
	if (l >= r)
		return true;
	else
	{
		if (str[l] != str[r])
			return false;
		return checkPalindrome(str, l + 1, r - 1);
	}
}