#include<iostream>
using namespace std;
int second(int);

int main()
{
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	int sec=second(n);
	cout << sec;
}

int second(int n)
{
	n = n / 10;
	int s = n % 10;
	return s;
}