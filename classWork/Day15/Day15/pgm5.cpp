#include<iostream>
using namespace std;
int sumDig(int);
int main()
{
	int n, sum = 0;
	cout << "enter limit:" << endl;
	cin >> n;
	int res = sumDig(n);
	cout << res;
}

int sumDig(int n)
{
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		sum = sum + i;
	}
	return sum;
}