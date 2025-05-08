#include<iostream>
using namespace std;
int facto(int);
int main()
{
	int n;
	cout << "enter the number:" << endl;
	cin >> n;
	int res=facto(n);
	cout << res;
}

int facto(int n)
{
	int fact = 1;
	for (int i = n;i > 0;i--)
	{
		fact = fact * i;
	}
	return fact;
}