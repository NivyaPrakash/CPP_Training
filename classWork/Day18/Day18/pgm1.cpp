#include<iostream>
using namespace std;
int contoDec(int,int);
int base2Dec(int, int);
int conversion(int, int,int);
int main()
{
	//int res=contoDec(15,2);
	//cout << res;
	int res = base2Dec(101,2);
	cout << res;
	
}


int contoDec(int num, int base)
{
	int r, p = 0,sum=0;
	while (num)
	{
		r = num % base;
		sum += r * pow(10, p);
		num /= base;
		p++;
	}return sum;
}


int base2Dec(int num, int base)
{
	int sum = 0, r, p=0;
	while (num)
	{
		r = num % 10;
		sum = sum + r * pow(base, p);
		p++;
		num /= 10;
	}return sum;
}
