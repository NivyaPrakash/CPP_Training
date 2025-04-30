#include<iostream>
using namespace std;
int main()
{
	int a[] = { 11,13,15,8,6,4,3,7,1 };
	int i, countOdd=0, countEven=0;
	int noElem = sizeof(a) / sizeof(a[0]);
	int outputArr[10];
	for (i = 0;i < 10 ;i++)
	{
		if (i < 10 / 2 && i % 2 != 0)
		{
			outputArr[countOdd] = i;
			countOdd++;
		}
		else {
			outputArr[countEven] = i;
			countEven--;
		}
	}
	for (i = 0;i < 10;i++)
	{
		cout << outputArr[i] << endl;
	}

}