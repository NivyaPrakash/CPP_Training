#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i,countOdd,countEven;
	for (i = 0,countOdd=0;i < 10;i++)
	{
		if (i % 2 != 0)
		{
			arr[countOdd] = i;
			countOdd++;
		}
		
	}
	for (int i = 0,countEven=countOdd;i < 10;i++)
	{
		if (i % 2 == 0)
		{
			arr[countEven] = i;
			countEven++;
		}
	}
	for (i = 0;i < 10;i++)
	{
		cout << arr[i];
	}

}
