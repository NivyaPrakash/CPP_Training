#include<iostream>
using namespace std;
class  student
{
protected:
	int rollno;
	string name;
	int age;
public:
	student(int rno, string s, int a) :rollno(rno), name(s), age(a)
	{
		cout << "student constructor got called" << endl;
	}
	void displayS()
	{
		cout << "student Information" << endl;
		cout << "======================================" << endl;
		cout << "Rollno:" << rollno << endl;
		cout << "Name:" << name << endl;
		cout << "Age:" << age<<endl;
	}
};


class marks:public student
{
private:
	int mark1;
	int mark2;
	int mark3;
	int total;
	float avg;
public:
	void calculate()
	{
		total = mark1 + mark2 + mark3;
		avg = total / 3;
	}
	marks(int rno, string s, int a, int m1, int m2, int m3) :student(rno, s, a), mark1(m1), mark2(m2), mark3(m3)
	{
		calculate();
	}
	void displayM()
	{
		displayS();
		cout << "Full Result" << endl;
		cout << "=============================" << endl;
		cout << "Total Marks:" << total << endl;
		cout << "average Marks:" << avg << endl;
	}
};

int main()
{
	int rollno, m1, m2, m3, age;
	string name;
	cout << "enter the Name:" << endl;
	cin >> name;
	cout << "Enter rollno:" << endl;
	cin >> rollno;
	cout << "Enter the age:" << endl;
	cin >> age;
	cout << "enter the 3 marks:" << endl;
	cin >> m1>>m2>> m3;
	marks m(rollno,name,age,m1,m2,m3);
	m.displayM();

}