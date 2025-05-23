#include<iostream>
using namespace std;
class T
{
private:
	static int val;
public:
	T()
	{
		val++;
	}
	void display()
	{
		cout << "value of value: " << val << endl;

	}
};

int T::val = 10;
int main()
{
	T t1;
	t1.display();
	T t2;
	t2.display();
	t1.display();
}