#include<iostream>
#include "isprime.h"
using namespace std;


/*int main()
{
	int n;
	cout << "enter num:" << endl;
	cin >> n;
	bool ret = isPrime(n);
	if (ret == true)
		cout << "given number is prime number";
	else
		cout << "given number is not prime" << endl;
	return 0;
}*/



int main()
{
	int num, count=0;
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