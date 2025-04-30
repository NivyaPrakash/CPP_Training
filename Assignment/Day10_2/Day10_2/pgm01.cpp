#include<iostream>
using namespace std;
void oddity(int, int);

int main()
{
	int num;
	cout << "Enter no:" << endl;
	cin >> num;
	oddity(num, 1);
	return 0;
}

void oddity(int n, int floor)
{
	if (floor > n)
		return;
	else
	{
		cout << floor << ", ";
		oddity(n, floor + 2);
	}
}