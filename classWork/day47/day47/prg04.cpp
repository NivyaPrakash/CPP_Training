//profiling and valgrin

#include<iostream>
using namespace std;
class smartptr
{
	int* ptr;
public:
	explicit smartptr(int* p = NULL) { ptr = p; }

	~smartptr() { delete(ptr); }

	int& operator*() { return *ptr; }
};

int main()
{
	smartptr ptr(new int());
	*ptr = 20;
	cout << *ptr;
	return 0;
}
