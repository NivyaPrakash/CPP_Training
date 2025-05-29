#include<iostream>
using namespace std;

class person
{
private:
	string ssn;
protected:
	string name;
	char gender;
	int age;
public:
	person(string s, string n, char g, int a) :ssn(s), name(n), gender(g), age(a)
	{
		cout << "person cons called";
	}
	void disp()
	{
		cout << "NAme:" << name<<endl;
		cout << "SSN" << ssn << endl;
		cout << "Gender:" << gender << endl;
		cout << "age:" << age << endl;

	}
};

class Employee:public person
{
private:
	int e_id;
	float e_sal;
	string desg;
public:
	Employee(string ssn, string n, char g, int age, int id, float sal, string desg) :person(ssn, name, gender, age)
	{
		cout << "Employee constructor got called";
	}
	void dis()
	{

		cout << "id:" << e_id << endl;;
		cout << "sal:" << e_sal << endl;
		cout << "desig:" << desg << endl;
		
	}
};


int main()
{
	Employee ob("ADH", "nivya", 'f', 27,45,10000,"manager");
	ob.disp();
	ob.dis();
}