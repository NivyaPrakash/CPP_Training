#include<iostream>
#include<vector>
#include<string>
#include <iterator>
#include<algorithm>
using namespace std;
class Employee
{
	int id;
	string name;
	int sal;
public:
	Employee():id(0),name(""){}
	Employee(int id,string name,int sal):id(id),name(name),sal(sal){}
	Employee(const Employee& others)
	void disp()
	{
		cout << "ID:" << id<<endl;
		cout << "Name:" << name << endl;
		cout << "Salart:" << sal << endl;
	}

	void setid(int id)
	{
		this->id = id;
	}
	int getid()
	{
		return id;
	}
	void setname(string name)
	{
		this->name = name;
	}
	string getname()
	{
		return name;
	}
	void setsal(int sal)
	{
		this->sal = sal;
	}
	int getsal()
	{
		return sal;
	}
	void setValues()
	{
		cin >> id >> name >> sal;
	}
	operator >>(is,Employee e)

};

int main()
{
	int id;
	string name;
	int sal;
	istream_iterator<Employee> inIt(std::cin);  
	istream_iterator<Employee> endIt;
	vector<Employee> emp;
	while(inIt!=endIt)
	{
		emp.push_back(*inIt);
		++inIt;
	}
	for (auto e : emp)
		name.disp();
}