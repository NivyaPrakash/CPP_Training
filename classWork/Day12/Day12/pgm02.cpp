#include<iostream>

using namespace std;
int main()
{
	int arr1[10][10];
	int arr2[10][10];
	int arr3[10][10] = {0};
	int rowA, colA, rowB, colB;
		cout << "Enter the rows" << endl;
		cin >> rowA >> colA;
		cout << "enter element" << endl;

	for (int i = 0, count = 0;i < rowA;i++)
	{
		for (int j = 0;j < colA;j++)//iteration to access te items
		{
			cout << "Enter the" << count++ << "item value";
			cin >> arr1[i][j];
		}
	}
	cout << "==============================" << endl;
	cout << "Enter the rows" << endl;
	cin >> rowB >> colB;
	cout << "enter element" << endl;
	for (int i = 0, count = 0;i < rowB;i++)
	{
		for (int j = 0;j < colB;j++)//iteration to access te items
		{
			cout << "Enter the" << count++ << "item value";
			cin >> arr2[i][j];
		}
	}
	if (colA == rowB)
	{
		for(int i=0;i<rowA;i++)
		{
			for (int j = 0;j < colB;j++)
			{
				for (int k = 0,sum=0;k < colA;k++)
				{
					sum+= arr1[i][k] * arr2[k][j];
					arr3[i][j] = sum;
				}
			}
		}
	}
	for (int i = 0, count = 0;i < rowA;i++)
	{
		for (int j = 0;j < colB;j++)//iteration to access te items
		{
			
			cout<< arr3[i][j];
		}
	}


}