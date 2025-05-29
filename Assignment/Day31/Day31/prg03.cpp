#include<iostream>
using namespace std;
class Vehicle
{
	string vid;
	string type;
	int rate;
	int distance;
	int days;
	int fare;
public:
	Vehicle(string id, string t, int r,int d,int ds): vid(id),type(t),rate(r),distance(d),days(ds)
	{

	}
	
	void calculateFare()
	{
		
		fare = rate * distance;
		cout << "Fare without distance:" << fare;
		if (days > 2)
		{
			fare= fare * 0.2;
		}
		cout << "Fare with long-term distance:" << fare;
	}
	
};
class car : public Vehicle
{
	car(string id, string t, int r,int d,int ds) :Vehicle(id, t, r,d,ds) {}
};
class bike : public Vehicle
{
	bike(string id, string t, int r, int d, int ds) :Vehicle(id, t, r, d, ds) {}
};
int main()
{
	string type, vid;
	int rate,distance,days;
	cout << "enter id" << endl;
	cin >> vid;
	cout << "enter type car or bike" << endl;
	cin >> type;
	cout << "enter rate" << endl;
	cin >> rate;
	cout << "Enter distance:" << endl;
	cin >> distance;
	cout << "Enter the days:" << endl;
	cin >> days;
	if (type == "car")
	{
		car c(vid, type, rate,distance,days);
	}
	else if (type == "bike")
	{
		bike c(vid, type, rate,distance,days);
	}

	return 0;
}