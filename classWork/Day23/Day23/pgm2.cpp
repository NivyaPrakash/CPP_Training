#include<iostream>
using namespace std;
int main()
{
	int* ptr = func(101);
	cout<<"BA of sum="<< (unsigned long int) & sum << endl;
}

//Ba+rowiv*(noofcols*sizeof(dt))+(colsiv*sizeof(dt))

int* fun(int a)
{
	int sum = 0;
	sum += a;
	cout << "BA sum=" << (unsigned long int) & sum << endl;
	return &sum;
}


