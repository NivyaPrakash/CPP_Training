//Write a Program for Decimal Octal Conversion
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	int i;
	int bin[100];
	for (i = 0;n > 0;i++)
	{
		bin[i] = n % 8;
		n = n / 8;
	}
	for (i = i - 1;i >= 0;i--)
	{
		cout << bin[i];
	}
}


