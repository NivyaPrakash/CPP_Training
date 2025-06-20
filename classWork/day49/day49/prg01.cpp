#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int c = 0;
	for (int i = 1; c < n; i += 2,c++) {  // Logical issue here
		cout << "Step " << i << endl;
	}
}