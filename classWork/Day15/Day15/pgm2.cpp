#include<iostream>
using namespace std;
float areaTriangle(float, float);
float areaRectangle(float, float);
float areaCircle(float);
float areaSquare(float);
int main()

{
	int choice;
	
	float base, height,length,width,radius,side;
	cout << "1.Area of trangle" << endl;
	cout << "2.Area of Rectangle" << endl;
	cout << "3.Area of Circle" << endl;
	cout << "4.Area of square" << endl;
	cout << "enter your choice:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Enter the base and height" << endl;
		cin >> base >> height;
		cout << "area of triangle:" << areaTriangle(base,height);
		break;
	case 2:cout << "Enter the length and width" << endl;
		cin >> length >> width;
		cout << "area of rectangle:" << areaRectangle(length,width);
		break;
	case 3:cout << "Enter the radius" << endl;
		cin >> radius;
		cout << "area of circle:" << areaCircle(radius);
		break;
	case 4:cout << "Enter the side" << endl;
		cin >> side;
		cout << "area of Square:" << areaSquare(side);
		break;
	default:cout << "not valid";


	}
}

float areaTriangle(float base, float height)
{
	float rs1 = 0.5 * base * height;
	return rs1;
}

float areaRectangle(float length, float width)
{
	float rs2 = length*width;
	return rs2;
}

float areaCircle(float radius)
{
	float rs3 = 3.141*radius*radius;
	return rs3;
}

float areaSquare(float side)
{
	float rs4 = side*side;
	return rs4;
}

