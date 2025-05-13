#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;int c = 30;
	int* ptr = nullptr;
	ptr = &a;
	cout << *ptr << endl;
	*ptr = 101;
	cout << *ptr << endl;
	cout << a<< endl;
	ptr = &b;
	cout << *ptr << endl;
	*ptr = 102;
	cout << *ptr << endl;
	cout << b << endl;
	ptr = &c;
	cout << *ptr << endl;
	*ptr = 103;
	cout << *ptr << endl;
	cout << c << endl;

}