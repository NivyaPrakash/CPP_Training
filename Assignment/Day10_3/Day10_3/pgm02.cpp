#include<iostream>
using namespace std;
int sumDigit(int);
int main()
{
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	int res=sumDigit(n);
	cout << res;

}


int sumDigit(int n)
{
	int i,d,sum=0;
	while (n>0)
	{
		d = n % 10;
		sum += d;
		n /= 10;
	}
	if (sum >= 10)
		return sumDigit(sum);
	else
		return sum;

	
	
}