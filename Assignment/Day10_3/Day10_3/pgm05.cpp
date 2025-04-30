#include<iostream>
using namespace std;
void minSec(int n);

int main()
{
	int hr;
	cout << "Enter the hours:" << endl;
	cin >> hr;
	minSec(hr);
	
}


void minSec(int hr)
{
	int min = hr * 60;
	int sec = min * 60;
	
	cout << "minutes:" << min << endl;;
	cout << "seconds:" << sec << endl;;
	
}