#include<iostream>
using namespace std;
int max2Nos(int*, int*);
void displayEq(int);
int main()
{
	int x1 = 20,x2 = 10;
	displayEq(20);
	cout << max2Nos(&x1, &x2) << endl;
	displayEq(20);
}


int max2Nos(int *a,int *b)
{
	//int retValue = 0;
	return  (*a > *b) ? *a : *b;

}

void displayEq(int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "=";
	}
	cout << endl;

}