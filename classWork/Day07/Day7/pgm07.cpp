#include<iostream>
using namespace std;
int main()
{
	int start = 0, end = 0;
	cout << "starting point" << endl;
	cin >> start;
	cout << "ending point" << endl;
	cin >> end;
	for (int j = 1;j <= 10;j++)
	
	{
		for (int i = start;i <= end;i++)
		{
			cout << i << "*" <<j << "=" << j* i <<"\t";
		}
		
		
		cout << endl;
	}
}