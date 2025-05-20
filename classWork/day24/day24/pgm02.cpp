#include<iostream>
using namespace std;




typedef struct address
{
	int hno;
	int pincode;
	string addressLine1;
	string addressLine2;
	string city;
	string state;
}ADDRESS;

struct Employee
{
	int id;
	string name;
	struct Date
	{
		int day, mnth, year;
	}D;

	struct address
	{
		int hno;
	}HNO;
	
	
};


int main()
{
	struct Employee e;
	e.id = 101;
	e.name = "nivya";
	e.D.day = 10;
	e.D.mnth = 5;
	e.D.year = 2025;
	e.HNO.hno = 20000;


	cout << e.id << "\t" << e.name << "\t" << endl;
	cout << e.D.day << "\t" << e.D.mnth << "\t" << e.D.year << endl;
	cout << e.HNO.hno << endl;

}