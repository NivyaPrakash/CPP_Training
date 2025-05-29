#include<iostream>
using namespace std;
class A
{
protected:
	int a;
	void display()
	{
		cout << "A:Method protected" << endl;
	}
public:
	A() { a = 10; }
	void dispA()
	{
		cout << "A: a=" << a << endl;

	}
};


class B : protected A
{
public:
	void dispB()
	{

		a = 20;
		display();
		dispA();
	}
};
class C :public B
{
public:
	void dispC()
	{
		dispB();
	}
};



int main()
{
	C ojc;
	ojc.dispC();
}