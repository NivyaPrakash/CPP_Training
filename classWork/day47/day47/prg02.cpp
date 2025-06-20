#include<iostream>
using namespace std;
int main()
{
	auto add = [](int a, int b) { return a + b; };
	auto r=add(3, 4);
	cout << r << endl;
	auto sub = [](int a, int b) { return a - b; };
	r=sub(4, 3);
	cout << r << endl;
	auto mul = [](int a, int b) { return a * b; };
	r=mul(3, 4);
	cout << r << endl;
	auto div = [](int a, int b) { return a / b; };
	r= div(4, 2);
	cout << r;
}