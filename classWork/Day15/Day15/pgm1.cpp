#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter the 2 number"<<endl;
	cin >> a >> b;
	cout << "before" <<" " << "a:" << " " << a <<" " << "b:" << " " << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "after" << endl;
	cout << "a:" << a << endl;
	cout<< "b:"<<b<<endl;
}