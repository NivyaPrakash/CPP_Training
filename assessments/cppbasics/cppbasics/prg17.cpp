//Write a Program to Check Palindrome
#include<iostream>
using namespace std;
int main()
{
	int n,rev=0;
	
	cout << "Enter number:" << endl;
	cin >> n;
	int temp = n;
	while(n)
	{
		int r = n % 10;
		rev = (rev * 10) + r;
		n /= 10;
	}
	if (rev == temp)
	{
		cout << "Palindrome" << endl;
	}
	else {
		cout << "not palindrome";
	}
	return 0;
}