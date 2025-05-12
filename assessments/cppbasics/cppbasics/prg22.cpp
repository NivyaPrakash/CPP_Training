//Write a Program to Find the Smallest and Largest Element in an Array
#include<iostream>
#define CAP 100
using namespace std;
int main()
{
	int n,i;
	int arr[CAP];
	cout << "Enter size of array:";
	cin >> n;
	cout << "Enter elements:" << endl;
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	for (i = 0;i < n;i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}cout << "max:" << max;
	cout << "min:" << min;
	return 0;
}