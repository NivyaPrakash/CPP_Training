#include<iostream>
using namespace std;

int main()
{
	
	auto areac = [](int r) { return 3.14 * r * r; };
	cout << areac(3);
	auto areas = [](int s) { return s * s; };
	cout << areas(3);
	auto arear = [](int l, int w) { return l * w; };
	cout << arear(3,4);
	auto areat = [](int b, int h) { return 0.5 * b * h; };
	cout << areat(3, 4);

}