#include<iostream>
using namespace std;
int countNo(int);

int main()
{
	int num;
	cout << "Enter no:" << endl;
	cin >> num;
	int res=countNo(num);
	cout << "count of 0:" << res;
	return 0;
}
int countNo(int n)
{
	if (n == 0)
		return 0;
	int r = n%10;
	if (r == 0)
	{
		return 1 + countNo(n / 10);
	}
	else
		return countNo(n / 10);
}