//calculate the sum of its digits
#include<iostream>
using namespace std;

int main()
{

	int i, sum = 0, n;
	cout << "Enter the number:" << endl;
	cin >> n;
	for (i = 0;i < 5;i++)
	{
		sum += n % 10;
		n = n / 10;


	}
	cout << sum;
}


