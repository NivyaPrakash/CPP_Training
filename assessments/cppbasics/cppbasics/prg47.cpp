//Write a Program for Hexadecimal to Decimal Convers#include<
#include<iostream>
#define MAX 100
using namespace std;
int hexa2Dec(char []);
int main()
{
	char num[MAX];
	cin >> num;
	cout << hexa2Dec(num);
	return 0;

}

int hexa2Dec(char num[])
{
	int sum = 0, p = 0, i = strlen(num) - 1;
	int d;
	while (i >= 0)
	{
		if (isdigit(num[i]))
			d = num[i] - '0';
		else
			d = tolower(num[i]) - 'a' + 10;
		sum += d * pow(16, p++);
		i--;

	}return sum;
}


