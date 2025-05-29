#include<iostream>
using namespace std;
class A
{
private:
	int x;
protected:
	int y;
	void promethod() { cout << "protected"; }
public:
	A() { x = 10; y = 20; }
	void dispA()
	{
		
		cout << "Hello from A" << endl;
		cout << "x=" << x<<"\t"<<"y=" << y;
	}
};

class B:public A
{
private:
	int a;
protected:
	int b;
	
public:
	B() {
		a = 60; b = 70;
	}
	void dispB()
	{
		
		cout << "Hello from B" << endl;
		cout << "a=" << a << "\t" << "b=" << b;
	}
	void promthd()
	{
		promethod();
	}
};


int main()
{
	A objA;
	B objB;
	objA.dispA();
	objB.dispB();
	objB.promthd();
}