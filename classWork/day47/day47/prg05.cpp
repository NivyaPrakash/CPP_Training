#include<iostream>
using namespace std;
class rectangle
{
	int length;
	int width;
public:
	rectangle(int l, int w) :length(l), width(w){}
	void area()
	{
		cout << length * width;
	}
};

int main()
{
	unique_ptr<rectangle>uptr(new rectangle(4, 6));
}