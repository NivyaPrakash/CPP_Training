#include<iostream>
using namespace std;

constexpr int fun(int a, int b)
{
	return a + b;
}

int main()
{
	int sum = fun(10, 20);
	cout << sum << endl;
}