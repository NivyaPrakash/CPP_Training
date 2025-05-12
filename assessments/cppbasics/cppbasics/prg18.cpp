//Write a Program to Check Whether a Number is an Armstrong Number or Not
#include<iostream>
int getDigit(int);
int armstrong(int, int);
using namespace std;
int main()
{
	int n,count=0;
	cout << "Enter number:" << endl;
	cin >> n;
	int temp = n;
	count=getDigit(n);
	int res = armstrong(n, count);
	if (res == temp)
	{
		cout << "Armstrong" << endl;
	}
	else {
		cout<<"Not armstrong"<<endl;
	}
	return 0;
}


int getDigit(int n)
{
	int count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return count;
}

int armstrong(int n, int count)
{
	int sum = 0;
	while (n)
	{
		int d = n % 10;
		int power = pow(d, count);
		sum = sum + power;
		n /= 10;
	}return sum;
}