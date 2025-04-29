#include<iostream>
#define CAP 10
using namespace std;
int main()
{
	int arr[CAP];
	int searchElement;
	cout << "Enter the" << CAP << "elements of array" << endl;
	
	for (int i = 0;i < CAP;i++)
	{
		cin >> arr[i];
	}
	
	cout << "Elements of array" << endl;
	for (int j = 0;j < CAP;j++)
	{
		cout << "arr[" << j<< "]=" << arr[j] << endl;
		
	}
	cout << "Enter the search element:";
	cin >> searchElement;
	for (int j = 0;j < CAP;j++)
	{
		
	}

}