//incrementing squared number-star pattern
#include<iostream>
using namespace std;
int main()
{

	int itr1, n;
	cout << "Enter n value:" << endl;
	cin >> n;
	itr1 = 1;
	int count = 1;
	while (itr1 < n)
	{
		int itr2 = 0;
		while (itr2 < n)
		{
			if (count % n == 0)
				cout << count;
			else
				cout << " " << count << "*";
			count++;
			itr2++;
		}
		cout << endl;
		itr1++;
	}
}


//Another method

/*

#include<iostream>
using namespace std;
int main()
{

	int itr1, n;
	cout << "Enter n value:" << endl;
	cin >> n;
	itr1 = 1;
	int count = 1;


	while (itr1 <= (n * n))
	{
		if (itr1 % n == 0)
			cout << itr1 << endl;
		else
			cout << itr1 << "*";
		itr1++;
	}
}
*/