#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	cout << ptr << endl;
	int a = 10;
	cout << a << endl;
	cout << &a << endl;
	cout << &ptr << endl;
	ptr = &a;
	cout << ptr;
	*ptr = 20;
	cout << *ptr;


	
}