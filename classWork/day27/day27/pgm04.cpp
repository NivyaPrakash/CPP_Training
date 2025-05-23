#include<iostream>
using namespace std;
class Employee
{
private:
	int e_id;
	string e_name;
public:
	Employee(int, string);
public:
	void display();
};

Employee::Employee(int id, string name)
{
	cout << "parametrized constructor got called" << endl;
	e_id = id;
	e_name = name;
}

void Employee::display()
{
	cout << e_id << "\t" << e_name << endl;
}


int main()
{
	Employee e1(101, "abc");
	e1.display();
	Employee e2(e1);
	e2.display();
	Employee e3 = e1;
	e3.display();
}