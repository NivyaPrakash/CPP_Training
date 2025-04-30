#include<iostream>
using namespace std;
int main()
{
	int n, sum,flag=false,temp;
	int a[10];
	cout << "Enter the number:" << endl;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	cout << "Enter the sum:" << endl;
	cin >> sum;
	for (int i = 0;i <n;i++)
	{
		
		for (int j = i+1;j <n;j++)
		{
			
			if (a[i] + a[j] == sum)
			{
				cout << i <<j <<endl;
				flag = true;
				break;
			}
			
		}
		
	}if (flag == false)
	{
		cout << "No subarray" << endl;
	}
}