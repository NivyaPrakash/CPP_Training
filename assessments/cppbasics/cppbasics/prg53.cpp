//Write a program in C++ to find the area and circumference of a circle.
#include<iostream>
using namespace std;
int main()
{
	float radius;
	cout << "Enter radius:" << endl;
	cin >> radius;
	float area = 3.141 * radius * radius;
	float circumference = 2 * 3.141 * radius<<endl;
	cout << "Area:" << area;
	cout << "Circumference:" << circumference<<endl;
}