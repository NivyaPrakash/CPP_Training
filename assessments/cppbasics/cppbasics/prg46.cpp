//Write a Program for Octal to Decimal Conversion
#include<iostream>
using namespace std;
int main()
{
	int num,count=0,sum=0;
	cout << "Enter number:" << endl;
	cin >> num;
	while (num)
	{
		int d = num % 10;
		int power = d*pow(8, count);
		sum += power;
		count++;
		num = num/ 10;
	}cout << sum;
}