#include<iostream>
using namespace std;
void oddity(int);

int main()
{
	int num;
	cout << "Enter no:" << endl;
	cin >> num;
	oddity(num);
	return 0;
}

void oddity(int n)
{
	
	if (n > 1)
		return;
	
	else if (n % 2 == 1)
		cout << n;
	oddity(n - 2);
	cout << n<<" ";
}