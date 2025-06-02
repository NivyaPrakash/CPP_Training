#include<iostream>
using namespace std;

template <class T>
void myswap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}


int main()
{
	int a = 10;
	int b = 20;
	float x = 30.3, y = 55.5;
	cout << a<<" " << b<<endl;
	myswap(a,b);
	cout << a << " " << b << endl;


	cout << x << " " << y << endl;
	myswap(x, y);
	cout << x <<" " << y<<endl;
}