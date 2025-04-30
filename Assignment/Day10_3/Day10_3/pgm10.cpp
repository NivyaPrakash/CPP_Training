#include<iostream>
using namespace std;

bool triangle(int, int, int);
int main()
{
	int a, b, c;
	cout << "Enter sides:" << endl;
	cin >> a >> b >> c;
	triangle(a, b, c);
	if (triangle(a, b, c)) {
		cout << "Triangle" << endl;
	}
	else {
		cout << "Not Triangle";
	}
	return 0;
}

bool triangle(int a, int b, int c)
{
	int sum = 0;
	sum = a + b + c;
	return  (sum == 180);
		
}