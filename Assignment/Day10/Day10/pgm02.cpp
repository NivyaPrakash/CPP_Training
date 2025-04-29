#include<iostream>
using namespace std;

int sumFirst(int);

int main()
{
	int n;
	cout << "Enter the number:" << endl;
	cin >> n;
	int ret=sumFirst(n);
	cout << ret;
	return 0;
}

int sumFirst(int n)
{
	
	if (n == 0)
		return 0;
	else
		return n+sumFirst(n - 1);
	
	
}
