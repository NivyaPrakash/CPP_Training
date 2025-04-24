//prime number using function
#include<iostream>
using namespace std;
bool isPrime(int);

int main()
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
}

bool isPrime(int n)
{
	bool flag = false;
	if (n <= 1)
		return false;
	for (int i = 2;i <=n/2;i++)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 0)
		return true;
	else
		return false;
}