#include<iostream>
using namespace std;
int pali(int);
int main()
{
	int n;
	
	cout << "enter number:" << endl;
	cin >> n;
	int temp = n;
	int res=pali(n);
	cout << res;
	if (temp == res)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}

int pali(int n)
{
	int rev = 0;
	while(n!=0)
	{
		int r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}return rev;
}