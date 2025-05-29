#include<iostream>
using namespace std;
class Nums
{
protected:
	int num1, num2;
public:
	void setNums(int num1,int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
};


class multiply:public Nums
{
private:
	int prod;
public:
	void setvalues()
	{
		cout << "Enter num1,num2 values:";
		cin >> num1 >> num2;
	}
	int mul()
	{
		prod = num1 * num2;
		return prod;
	}
};


int main()
{
	multiply mobj;
	mobj.setvalues();
	cout<<"prod:"<<mobj.mul();
}