#include<iostream>
using namespace std;
int getDigits(int);
int armstrong(int,int);
int main()
{
	int n;
	cout << "enter number:";
	cin >> n;
	int temp = n;
	int count=getDigits(n);
	int res=armstrong(count, n);
	cout << res;
	if (res == temp)
	{
		cout << "arm";
	}
	else {
		cout << "no";
	}
}

	

int getDigits(int n)
{
	int count = 0;
	while (n)
	{
		int d = n % 10;
		count++;
		n = n / 10;
	}return count;
}



int armstrong(int n,int count)
{
	int sum = 0;
	while (n)
	{
		int d = n % 10;
		int power = pow(d, count);
		sum = sum + power;
		n = n / 10;
	}return sum;
}
