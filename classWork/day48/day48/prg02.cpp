#include<iostream>
using namespace std;
int ha(int);

int main()
{
	int num;

	cout << "Enter no:" << endl;
	cin >> num;
	int temp;
	temp = num;
	int s=ha(num);
	cout << temp;
	if (temp % s == 0)
	{
		cout << "h";
	}
	else
	{
		cout << "not";
	}

}

int ha(int num)
{
	int sum = 0;
	while (num)
	{
		int d = num % 10;
		sum = sum + d;
		num = num / 10;
	}
	cout << sum;
	return sum;

}
