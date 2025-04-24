#include<iostream>
using namespace std;
void display(void);
int displayRet(void);
void sumIntegers(int, int);
int subIntegers(int, int);
int main()
{
	//int ch;
	//displays();
	//cin >> ch;
	
	//switch (ch)
	switch(displayRet())
	{
		
	default:
		cout << "wrong choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		sumIntegers(10, 20);
		break;
	case 2:
		cout << "Subtraction" << endl;
		
		break;
	case 3:
		cout << "Exit the Application" << endl;
		break;
	}
}
void display()
{
	cout << "press" << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "Exit" << endl;
	cout << "choice:";
}

void displayRet()
{
	cout << "In the function displayRet" << endl;
	int ch;
	cout << "press" << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "Exit" << endl;
	cout << "choice:";
	cin >> ch;
	return;
}

int sumIntegers(int v1, int v2)
{
	cout << v1 << "+" << v2 << "=" << v1 + v2 << endl;
}
int subIntegers(int v1, int v2) {
	int r = v1 - v2;
	return r;
}