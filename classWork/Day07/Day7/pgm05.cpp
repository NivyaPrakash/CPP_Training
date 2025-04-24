#include<iostream>
using namespace std;
int main()
{
	int n = 6,count=0;
	for (int i = 1;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			for (int k = j;k < n;k++)
			{
				for (int l = k;l < n;l++)
				{
					if ((i + j + k + l) == n)
					{
						cout << i << "+" << j << "+" << k << "+" << l << "=" << n << endl;
						count++;
					}
				}
			}
		}
	}
	if (count == 0)
		cout << "no of ways=-1" << endl;
	else
		cout << "No of ways=" << count << endl;
	return 0;
}