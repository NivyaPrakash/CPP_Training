#include<iostream>
using namespace std;
int main()
{
	int correctPin = 1234;
	int userPin,attempt=0,choice=0;
	do {
		cout << "Enter the pin:" << endl;
		cin >> userPin;
		if (userPin == correctPin)
		{
			cout << "Access Granted";
		}
		else
		{
			cout << "Access denied" << endl;
			cout << "Next Attempt(0/1)";
			cin >> choice;
			attempt++;
		}
	} while ((userPin != 0) &&(choice==0)&& (attempt > 3));
	
}