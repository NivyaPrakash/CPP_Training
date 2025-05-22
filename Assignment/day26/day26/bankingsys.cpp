#include<iostream>
using namespace std;
#include<cstring>

class ATMAccount
{
private:
	float balance;
	char accName[20];
	int pin;
public:
	void setaccName(char*);
	char* getaccName();
	void setbalance(float);
	float getbalance();
	void setpin(int);
	int getpin();
	void deposit();
	void withdraw();
	void checkBalance();
	bool checkpin(int);
	void menus();
	void menu();
};

void ATMAccount::setaccName(char* s)
{
	strcpy(accName, s);
}
char* ATMAccount::getaccName()
{
	return accName;
}
void ATMAccount::setbalance(float b)
{
	balance = b;
}
float ATMAccount::getbalance()
{
	return balance;
}
void ATMAccount::setpin(int p)
{
	pin = p;
}
int ATMAccount::getpin()
{
	return pin;
}



void ATMAccount::deposit()
{
	float dep;
	cout << "Enter the amount to be deposited:";
	cin >> dep;
	balance += dep;
	cout << "cash deposited successfully" << endl;
	cout << "Current balance:" << balance << endl;
}


void ATMAccount::withdraw()
{
	float wit;
	cout << "Enter the amount to withdrawal:" << endl;
	cin >> wit;
	balance -= wit;
	cout << "cash withdrawed successfully" << endl;
	cout << "Current balance:" << balance << endl;
}

void ATMAccount::checkBalance()
{
	cout << "Current balance" << balance;
}

bool ATMAccount::checkpin(int p)
{

	if (pin == p)
		return true;
	else
		return false;
}

void ATMAccount::menus()
{
	cout << endl;
	cout << "1.Deposit cash" << endl;
	cout << "2.withdraw cash" << endl;
	cout << "3.Check Balance" << endl;
	cout << "4.Exit" << endl;
}


void ATMAccount::menu()
{
	int choice, p;
	cout << "Enter your pin" << endl;
	cin >> p;
	if (checkpin(p))
	{
		do
		{
			menus();
			cout << "Enter your choice:" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:deposit();
				break;
			case 2:withdraw();
				break;
			case 3:checkBalance();
				break;
			case 4:return;
				break;
			default:cout << "Invalid choice : " << endl;
				break;
			}
		} while (choice != 4);

	}
	else
		cout << "Invalid pin";

}

int main()
{
	int p = 1234;
	char s[] = "Nivya";
	float b = 20000;
	ATMAccount a;
	a.setpin(p);
	a.setaccName(s);
	a.setbalance(b);
	a.menu();




}
