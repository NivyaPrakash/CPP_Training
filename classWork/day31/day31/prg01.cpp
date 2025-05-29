#include<iostream>
using namespace std;

class Test
{
	int x;
	int y;
public:
	Test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Test& setX(int val)
	{
		x = val;
		return *this;
	}
	Test& setY(int val)
	{
		y = val;
		return *this;
	}
	void display()
	{
		cout << "x=" << x << "y:" << y;

	}
};



int main()
{
	Test objT(5, 6);
	objT.display();
	objT.setX(101);
	objT.setY(102);
	objT.display();

}