#include<iostream>
#include"file11.h"
#include "file2.h"
#define MAXCAP 100
using namespace std;

typedef struct users {
	int _id;
	int userType;
	string userName;
}USERS;

void dispMenuNU(string);
void dispMenuAU();

//int main(int argc,char *argv[])
//{
	//stringHandling();
	//enumHandling();
	
	/*cout << argc << endl;
	cout << "argv[0]" << argv[0] << endl;
	cout << "argv[1]" << argv[1] << endl;
	cout << "argv[2]" << argv[2] << endl;
	cout << "argv[3]" << argv[3] << endl;

	cout << "1st char" << argv[1][0] << endl;
	cout << "2nd char" << argv[1][1] << endl;
	int res = 0;
	switch (argv[1][0])
	{
	case '+':res = atoi(argv[2]) + atoi(argv[3]);
		cout << "result:" << res << endl;
		break;
	case '-':res = atoi(argv[2]) + atoi(argv[3]);
		cout << "result:" << res << endl;
		break;
	}
	
	//for (int i = 0;i < argc;i++)
		//cout << argv[i] << endl;

	//int res = atoi(argv[1]) + atoi(argv[2]);
	//cout << res << endl;*/


	/*int capCurrent, unusedCap = 0;
	cout << "Enter the current capacity:" << endl;
	cin >> capCurrent;
	unusedCap = MAXCAP - capCurrent;
	if (unusedCap == 0)
	{
		cout << "\nCapacity is full" << endl;
		return 0;

	}
	cout << "\nYou can store items in the storage" << endl;
	
	
}*/




	int main()
	{
		USERS u;
		cout << "Enter id:";
		cin >> u._id;
		cout << "Enter the user type(0/1):" << endl;
		cin >> u.userType;
		cout << "Enter the username" << endl;
		cin >> u.userName;
		if (u.userType == 0)
		{
			dispMenuAU();
		}
		else
		{
			dispMenuNU(u.userName);
		}

		cout << "Application ended successfully" << endl;
	}
	void dispMenuAu() {
		cout << "I am able to access  admin menu" << endl;

	}
	void dispMenuNU(string name) {
		cout << "User :" << name << "has logged in" << endl;
		cout << "I am able to access users Menu" << endl;
	}
	

	
