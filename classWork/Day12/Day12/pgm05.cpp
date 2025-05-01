#include <iostream>
#include <cstring>

using namespace std;
int strlenF(int[], int);




int main()
{
	int a[] = { 1,3,5,7,2,4,6,8 };
	int n = sizeof(a) / sizeof(a[0]);
	int res=strlenF(a, n);
	cout << res;
	
	return 0;
}
int strlenF(int a[], int CAP)
{
	int count = 0;
	for (int i = 0;i < CAP;i++)
	{
		if (a[i] == '\0')
			break;
		count++;
	
	}return count;
}

