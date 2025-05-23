#include<iostream>
using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
public:  //when you declared in private it cannot access the fun
	Employee()
	{
		cout << "cconstructor got called" << endl;
		e_id = 0;
		e_name = "e_name";
	}
	void display()
	{
		cout << "Display function called" << endl;
		cout << e_id << "\t" << e_name << endl;
	}
};

int main()
{
	Employee e;
	e.display();


	Employee e2(e);
	e2.display();

}

