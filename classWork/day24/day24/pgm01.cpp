#include<iostream>
using namespace std;

struct Date
{
	int day, mnth, year;
};

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
	Date joindate;
	ADDRESS adr;
};


int main()
{
	struct Employee e;
	e.id = 101;
	e.name = "nivya";
	e.joindate.day = 10;
	e.joindate.mnth = 4;
	e.joindate.year = 2025;


	cout << e.id << "\t" << e.name << "\t"<<endl;
	cout << e.joindate.day << "\t" << e.joindate.mnth << "\t" << e.joindate.year << endl;

}