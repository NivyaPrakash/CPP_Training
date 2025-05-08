#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, high;
	cout << "Enter 5 numbers";
	cin >> a >> b >> c >> d >> e;
	high = a;
	if (b > high)
		high = b;
	if (c > high)
		high = c;
	if (d > high)
		high = d;
	if (e > high)
		high = e;
	cout << "high:" << high;
	return 0;
}