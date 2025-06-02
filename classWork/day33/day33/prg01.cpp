#include<iostream>
using namespace std;
class B
{
public:
	void disp()
	{
		cout << "B" << endl;
	}
	void printB()
	{
		cout << "print B" << endl;
	}
};

class D :public B
{
public:
	void printD()
	{
		cout << "print" << endl;
	}
	void disp()
	{
		cout << "D" << endl;
	}
};

int main()
{
	D d;
	d.printD();
	d.disp();

	B* ptr = new B;
	ptr->printB();
	ptr->disp();


	ptr = &d;
	ptr->printB();
	ptr->disp();

}