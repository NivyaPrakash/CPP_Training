#include<iostream>
using namespace std;

int squares(int);
int main()
{
	int n;
	cout << "enter number:" << endl;
	cin >> n;
	int res=squares(n);
	cout << " = "<<res;

}

int squares(int n)
{
	int res, temp;
	if (n == 0)
		return 0;
	else
	{
		if (n == 1)
			cout << "1";
		else
			cout << n * n << " + ";
		temp = n * n + squares(n - 1);
		return temp;
	} 
}