/*
functions of different types:calling of a function

1.call by value
2call by pointers
3.call by reference


*/


#include<iostream>
using namespace std;
int add(int, int);
int updateAdd(int, int);
int updateAdd2(int *, int *);
int updateAdd3(int&, int&);
int main()
{
	
	int a = 10, b = 20;
	int res = add(a, b);
	cout << res << endl;
	
	res = updateAdd(a, b);
	cout << res << endl;
	cout << "a:"<<a << endl;
	cout << "b:"<<b << endl;


	res = updateAdd2(&a, &b);
	cout << res << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;


	res = updateAdd3(a, b);
	cout << res << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	return 0;
}

int add(int v1, int v2)
{
	return v1 + v2;
}


int updateAdd(int v1, int v2)
{
	v1 *= 2;
	v2 /= 3;
	cout << "v1:" << v1 << endl;;
	cout << "v2:" << v2<<endl;
	return v1 + v2;
}

//calling by address
int updateAdd2(int *v1, int *v2)
{
	cout << "update 2" << endl;
	cout << v1 << "\t" << v2;
	*v1 *= 2;
	*v2 /= 3;
	cout << "v1:" << v1 << endl;;
	cout << "v2:" << v2 << endl;
	return *v1 + *v2;
}



//call by reference
int updateAdd3(int& v1, int& v2)
{
	cout << "in updatedAdd3" << endl;
	cout << "v1:" << v1 << endl;
	cout << "v2:" << v2 << endl;
	v1 *= 10;
	v2 = v2 * v1;
	cout << "changed value:" << endl;
	cout << "v1:" << v1 << endl;;
	cout << "v2:" << v2 << endl;
	return v1 + v2;
	
}

