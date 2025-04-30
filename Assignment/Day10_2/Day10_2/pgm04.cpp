#include<iostream>
using namespace std;
void divisible(int);
int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	divisible(n);
	return 0;
}

void divisible(int n)
{
	int i;
	for (i = 1;i <= n;i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}cout << i;
	}
}