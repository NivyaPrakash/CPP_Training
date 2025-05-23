#include<iostream>
using namespace std;
class Employee
{
private:
	int e_id;
	string e_name;
public:
	void init(int id, string n)
	{
		e_id = id;
		e_name = n;
	}
	void printdetails()
	{
		cout << e_id<< "\t" << e_name;
	}

};

int main()
{
	Employee e;
	/*
	e.e_id = 102;
	e.e_name = "Nivya";
	Employee* ptr = &e;
	cout << e.e_id << "\t" << e.e_name;
	ptr->e_id = 201;
	cout << e.e_id << e.e_name;
	*/
	e.init(101, "sisu");
	e.printdetails();
}



