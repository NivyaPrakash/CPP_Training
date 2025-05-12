//Write a Program to Calculate the Sum of Elements in an Array
#include<iostream>
#define CAP 100
using namespace std;
int main()
{
	int n, i,sum=0;
	int arr[CAP];
	cout << "Enter size of array:" << endl;
	cin >> n;
	cout << "Enter the elements:" << endl;
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for (i = 0;i < n;i++)
	{
		sum = sum + i;
	}
	cout << sum;
	return 0;
}