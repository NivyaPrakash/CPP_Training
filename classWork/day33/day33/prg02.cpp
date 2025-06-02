#include<iostream>
using namespace std;
class student
{

public:
	virtual void showdetails() = 0;
	virtual void sports() = 0;
	virtual void marks() = 0;
	virtual void calculate() = 0;
};


class sports :public student
{
protected:
	int sid;
	string name;
	string sportsitem;

public:
	sports( int id,string n,string item): sid(id),name(n),sportsitem(item){}
	void showdetails() override
	{
		cout << "student id:" << sid;
		cout << "student name:" << name;
		cout << "sports item:" << sportsitem << endl;
	}
};


class Mark :public student
{
	int mark1;
	int mark2;
	int mark3;
	float avg;
public:
	Mark(int m1,int m2,int m3):mark1(m1),mark2(m2),mark3(m3){}
	void calculate() override
	{
		avg = (mark1 + mark2 + mark3) / 3;
	}
	void showdetails() override
	{
		cout << "mark1:" << mark1 << endl;
		cout << "mark2:" << mark2<<endl;
		cout << "Mark3:" << mark3 << endl;
		cout << "Average:" << avg<<endl;
	}
	
};


int main()
{
	student* ptr = new Mark(80, 90, 100);


}
//function template