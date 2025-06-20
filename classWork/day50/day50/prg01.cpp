#include<iostream>
#include<string>
using namespace std;

class person
{
protected:
	string name;
	string address;
	int phno;

	
public:
	person(string name,string address,int phno):name(name),address(address),phno(phno){}
	string getname()
	{
		return name;
	}
	string getaddress()
	{
		return address;
	}
	int phno()
	{
		return phno;
	}
	void setname(string )
	{
		this->name = name;
	}
	void setaddress(string)
	{
		this->address = address;
	}
	void setphno(int)
	{
		this->phno = phno;
	}
};


class Employee :public person
{
protected:
	int empid;
	float esalary;
	int pid;
public:
	Employee(string name,string address,int phno,int empid,float esalary,int pid):person(name,address,phno),empid(empid),esalary(esalary),pid(pid){}
	void setempid(int)
	{
		this->empid = empid;
	}
	void setesalary(float)
	{
		this->esalary = esalary;
	}
	void setpid(int)
	{
		this->pid = pid;
	}
};

class Manager:public Employee
{
	string role;
	float DA;
public:
	Manager(string name,string adrress,int phno,int empid,float esalary,int pid,string role,float DA):Employee(name,address,phno,empid,esalary,pid),role(role),DA(DA){}

};


class Admin:public Employee
{
	string role;
	bool prv;
public:
	Admin(string name, string adrress, int phno, int empid, float esalary, int pid, string role, bool prv):Employee(name, address, phno, empid, esalary, pid), role(role), prv(prv) {}
};

class Engineer :public Employee
{
	string role;
	float vpay;
public:
	Engineer(string name, string adrress, int phno, int empid, float esalary, int pid, string role, float vpay) :Employee(name, address, phno, empid, esalary, pid), role(role), vpay(vpay) {}


};


class Users:public Employee
{
	string uid;
	string password;
public:
	
};
