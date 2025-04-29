#include<iostream>
using namespace std;
int main()
{
	int charge,mobileStatus;
	cout << "Enter mobile status(0/1):" << endl;
	cin >> mobileStatus;
	cout << "Enter charge";
	cin >> charge;
	
	if (mobileStatus == 1) {
		if (charge <= 18)
		{
			cout << "plug in charge" << endl;
		}
		cout << "contine......" << endl;
		cout << "you can browse" << endl;
	}
	else
	{
		cout << "powering on the mobile" << endl;
		cout << "Enter mobile status(0/1):" << endl;
		cin >> mobileStatus;
		if (mobileStatus == 1)
		{
			cout << "enter charge : " << endl;
			cin >> charge;
			if (charge <= 18)
			{
				cout << "plug in charge" << endl;
			}
			cout << "contine......" << endl;
			cout << "you can browse" << endl;
		}
		else {
			cout << "Your phone condition is not good" << endl;
			cout << "Go to mobile store" << endl;
		}
	}
}