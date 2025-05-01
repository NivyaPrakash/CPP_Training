//find aggregate marks and percentage mark obtained by the student
#include<iostream>
using namespace std;


int main()
{
	float m1, m2, m3, m4, m5;
	float per;
	float sum;
	cout << "Enter marks in 5 subjects" << endl;
	cin >> m1 >> m2 >> m3 >> m4 >> m5;


	if ((m1 <= 100) && (m2 <= 100) && (m3 <= 100) && (m4 <= 100) && (m5 <= 100))
	{
		sum = m1 + m2 + m3 + m4 + m5;
		per = sum / 5;
		cout << "sum is:" << sum << endl;
		cout << "percentage:" << per;
	}
	else {
		cout << "you enter wrong marks" << endl;
	}

}
