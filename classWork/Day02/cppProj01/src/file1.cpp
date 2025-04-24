#include<iostream>
#include <addition.h>
#include<subtraction.h>
#include<multiplication.h>
#include<division.h>
#include<modulo.h>
using namespace std;
//int addition(int, int); //prototype of function
int main() {
	int val1, val2;
	int ret = 0;
	cout << "Enter the value of val1 and val2"<<endl;
	cin >> val1 >> val2;
	//ret = addition(val1, val2);
	//	cout << "\n Addition of" << val1 << "and" << val2 << "=" << ret << endl;
	int choice;
	cout << "Enter your choice" << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "4.Division" << endl;
	cout << "5.Modulo" << endl;
	cin>>choice;
	switch (choice)
	{
	case 1:ret = addition(val1, val2);
		cout << "\n Addition of" << val1 << "and" << val2 << "=" << ret << endl;
		break;
	case 2:ret = subtraction(val1, val2);
		cout << "\n subtraction of" << val1 << "and" << val2 << "=" << ret << endl;
		break;
	case 3:ret = multiplication(val1, val2);
		cout << "\n multiplication of" << val1 << "and" << val2 << "=" << ret << endl;
		break;
	case 4:ret = division(val1, val2);
		cout << "\n division of" << val1 << "and" << val2 << "=" << ret << endl;
		break;
	case 5:ret = modulo(val1, val2);
		cout << "\n Modulo of" << val1 << "and" << val2 << "=" << ret << endl;
		break;
	default:
		cout << "invalid choice" << endl;
	}
	return 0;
}
