#include<iostream>
using namespace std;

void reverse(int);
int main()
{
	int n;
	cout << "Enter the number:" << endl;
	cin >> n;
	reverse(n);
	return 0;
}

void reverse(int n)
{
	if (n == 0)
		return;
	cout << n % 10;
	reverse(n / 10);
}