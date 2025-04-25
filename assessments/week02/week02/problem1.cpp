#include<iostream>
using namespace std;
int main()
{
	int n, d, r,sum=0,num;
	cout << "Enter a number:" << endl;//user input n
	cin >> n;
	num = n;//the number(n) is stored into another variable.otherwise can't check it with sum.the value of n is changed.
	while (n > 0)
	{
		d = n % 10;//digits are seperated
		r = d * d * d;//find cubes
		sum += r;//add it with sum
		n = n / 10;
	}cout << "sum is:" << sum << endl;
	if (sum == num)//check the sum with user input number 153
	{
		cout << "Armstrong number";
	}
	else
	{
		cout << "not Armstrong number";
	}
}