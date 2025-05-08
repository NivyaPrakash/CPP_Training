#include<iostream>
using namespace std;
int main()
{
	int start_range, end_range;
	cout << "enter start range:";
	cin >> start_range;
	cout << "enter end range";
	cin >> end_range;
	for (int i = start_range;i <= end_range;i++)
	{
		if (i % 2 == 0)
		{
			cout <<" " << i;
		}
	}
	return 0;
}