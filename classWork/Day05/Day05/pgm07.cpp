#include<iostream>
using namespace std;
int display();
int main()
{

BEGIN:
	while (true) {
		int ret = display();
		switch (ret)
		{
		case 1:
			cout << "Addition" << endl;
			break;
		case 2:
			cout << "subtraction" << endl;
			break;
		case 3:
			cout << "Multiplication" << endl;
			break;
		case 4:
			cout << "Exiting the application" << endl;
			goto END;
			//flag = "false";
			break;
		default:
			cout << "Wrong choice" << endl;
		}
	}
END:
	cout << "program ended successfully" << endl;
	goto BEGIN;

	return 0;
}

int display()
{
	int ch;
	cout << "press" << endl;
	cout << " 1.Addtion" << endl;;
	cout << "2.subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "0.Exit" << endl;
	cout << "choice";
	cin >> ch;
	return ch;
}