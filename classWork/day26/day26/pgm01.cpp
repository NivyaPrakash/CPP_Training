//if all the variable and method of class are privatethe class is not itself has no use.
#include<iostream>
#include<cstring>
using namespace std;
class student
{
protected:
	int rollno;
	string name;
public:
	void display(string str1)
	{
		cout << "hello,"<<str1<<endl;
		cout << "name:" <<name<< endl;
	}
	void setName(string s)
	{
		name = s;
	}

};


int main()
{
	student s;
	cout << sizeof(s) << endl;
	//s.name = "abc";
	//s.rollno = 101;
	//cout << s.name << endl;
	//cout << s.rollno<<endl;

	s.display("nivya");
	s.setName("prakash");
	s.display("niv");

	return 0;
}
