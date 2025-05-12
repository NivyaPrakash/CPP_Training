//Write a Program for Decimal to Binary Conversion
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
		bin[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1;i >= 0;i--)
	{
		cout << bin[i];
	}
}




