//recursive function
//function calling itself is called as recursive function.
#include<iostream>
using namespace std;
int f1(int);
int main()
{
	int ret = 0;
	ret = f1(5);
	cout << "ret:" << ret;
	return 0;
}

int f1(int v)
{
	
	if (v <= 0)
		return 1;
	v--;
	f1(v);
	cout << v << endl;
}