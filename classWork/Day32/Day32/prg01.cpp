#include<iostream>
using namespace std;
class A
{
protected:
	int a;
public:
	A(int x) :a(x)
	{
		cout << "a constructor got called and a:"<<a<<endl;
	}
	~A() { cout << "a distructor got called" << endl; }
	void dispA()
	{
		cout << "a:" << a << endl;
	}
};


class B:public A
{
protected:
	int b;
public:
	B(int x,int y) :A(x),b(y)
	{
		cout << "B constructor is called and b:"<<b << endl;

	}
	~B() { cout << "B distructor got called" << endl; }
	void dispB()
	{
		cout << "b:" << b<<endl;
		cout << "a=" << a << endl;
	}
};

class C :public B
{

	int c;
public:
	C(int x, int y, int z) : B(x,y), c(z)
	{
		cout << "c constructor got called" << endl;
	}
	~C() { cout << "C distructor got called" << endl; }
	void dispC()
	{
		cout << "c:" << c<<endl;
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
		
	}
};


int main()
{
	C objc(10, 20,30);
	objc.dispC();
}