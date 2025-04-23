//swapping two numbers without using third variabe and without using function or pointers.
#include<iostream>
using namespace std;
int main()
{


	int a, b;;
	cout << "Enter first no a:" << endl;
	cin >> a;
	cout << "enter second person b:" << endl;
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "after swapping" << endl;
	cout << "a=" << a;
	cout << "b=" << b;

}



	