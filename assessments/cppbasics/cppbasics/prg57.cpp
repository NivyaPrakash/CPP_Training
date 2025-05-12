//Result Evaluation -first second pass or fails
#include<iostream>
using namespace std;
int main()
{
	int sum = 0, m1, m2, m3;

	cout << "Enter marks:" << endl;
	cin >> m1 >> m2 >> m3;
	sum = m1 + m2 + m3;
	cout << sum;
	float per = sum / 3.0;
	if (per >= 60)
	{
		cout << "first" << endl;
	}
	else if (per >= 40)
	{
		cout << "second" << endl;
	}
	else if (per >= 20)
	{
		cout << "Pass" << endl;
	}
	else {
		cout << "fail" << endl;

	}

	return 0;
}