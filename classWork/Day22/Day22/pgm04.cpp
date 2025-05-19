#include<iostream>
using namespace std;
int sumofArr(int*,int);


int main()
{
	

	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\t" << sumofArr(&list[0], cap) << endl;
}


int sumofArr(int* ptr, int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++,ptr++)
	{
		//sum = sum + ptr[i];
		sum +=  *ptr;
	}
	return sum;
}