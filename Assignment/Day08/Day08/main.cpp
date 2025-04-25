#include<iostream>
#include "isprime.h"
using namespace std;
int main()
{
	int num, count = 0;
	cout << "Enter number:" << endl;
	cin >> num;
	for (int i = 1;i <= num;i++)
	{
		for (int j = i;j <= num;j++)
		{
			if (isPrime(i) && isPrime(j))
			{
				if (i + j == num)
				{
					cout << i << "+" << j << "=" << num << endl;
					count++;
				}
			}
		}
	}cout << "Count:" << count << endl;
}