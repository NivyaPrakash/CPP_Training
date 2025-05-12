//Write a Program to Find the Second Smallest Element in an Array
#include<iostream>
#define CAP 100
using namespace std;
int main()
{
	int n,i;
	int arr[CAP];
	cout << "Enter size of array:" << endl;
	cin >> n;
	cout << "Enter the elements:" << endl;
	for ( i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for (i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else {
				j++;
			}
		}
	}
	cout <<"second smallest:"<< arr[n - 2];
	return 0;
}