#include<iostream>

using namespace std;
int main()
{
	int n,i,j;
	int arr[100][100];
	cout << "Enter n:" << endl;
	cin >> n;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <=i;j++)
		{
			if (j == 0|| j == i)
				arr[i][j] = 1;
			
				
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0;i <n;i++)
	{
		for (j = 0;j <= i;j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}

}
