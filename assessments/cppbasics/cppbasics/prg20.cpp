#include<iostream>
using namespace std;
int gcd(int, int);
int main()
{
	int n1, n2;
	cout << "Enter two numbers:" << endl;
	cin >> n1 >> n2;
	int res = gcd(n1, n2);
	cout << res;
	return 0;

}

int gcd(int n1, int n2)
{
	while (n2 != 0)
	{
		int r = n1 % n2;
		n1 = n2;
		n2 = r;
	}return n1;
}