#include<iostream>
using namespace std;
int main()
{
	int n,digit,sum=0,pro=1;
	cout << "enter number:" << endl;
	cin >> n;
	while (n > 0)
	{
		digit = n % 10;
		sum += digit;
		if (digit != 0)
		{
			pro *= digit;
		}
		n /= 10;
	}cout << "sum:" << sum;
	cout << "product" << pro;
}