#include<iostream>
using namespace std;
int main()
{
	int a, b, sum = 0, choice;
	do
	{
		
		cout << "Enter first no:" << endl;
		cin >> a;
		cout << "enter the second no:" << endl;
		cin >> b;
		sum = a + b;
		cout << "sum:" << sum;
		cout << "do you want to add more number(0/1):" << endl;
		cin >> choice;
	} while (choice == 0);
	cout << "calculator exited" << endl;
	return 0;
}