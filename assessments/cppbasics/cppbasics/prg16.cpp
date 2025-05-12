//Write a Program to Check the Prime Number
#include<iostream>
using namespace std;
int main()
{
	bool flag = true;
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	if (n <= 1)
	{
		cout << "Not prime" << endl;
	}
	for (int i = 2;i < n;i++)
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "Prime number" << endl;
	}
	else {
		cout << "Not prime" << endl;
	}
	return 0;
}