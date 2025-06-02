#include<iostream>
using namespace std;
template <class T1,class T2>
class calc
{
private:
	T1 a;
	T2 b;
public:
	calc(T1 x,T2 y):a(x),b(y){}
	void add()
	{
		cout << "sum=:" << a + b <<endl;
		
	}
	void sub()
	{
		cout << "sub:" << a - b << endl;
		
	}
	void mul()
	{
		cout << "mul" << a * b << endl;

	}
	void div()
	{
		cout << "div:" << a / b << endl;
	
	}
};

int main()
{
	

	calc <int, int>intcalc(10,20);
	intcalc.add();
	intcalc.sub();
	intcalc.mul();
	intcalc.div();

	
	calc <float, float>floatcalc(10.2,2.2);
	floatcalc.add();
	floatcalc.sub();
	floatcalc.mul();
	floatcalc.div();

	
	
}