#include<iostream>
using namespace std;
int main()
{
	int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
			cout << "address=" << (unsigned long int) & a[i][j] << "\t value=" << a[i][j]<<endl;
			
	}
}

//Ba+rowiv*(noofcols*sizeof(dt))+(colsiv*sizeof(dt))

int* fun(int a)
{
	int sum = 0;
	sum += a;
	cout << "BA sum=" << (unsigned long int) & sum << endl;
	return &sum;
}


