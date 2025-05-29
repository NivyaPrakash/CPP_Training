#include<iostream>
using namespace std;
class vehicle
{
private:
	int wheel;
	int NoSeat;
	string meterial;
	string color;
	string modeofcntrl;
public:
	vehicle(int wheel, int noSeat,string meterial, string color,string modeofcntrl)
	{
		this->wheel = wheel;
		this->NoSeat = NoSeat;
		this->meterial = meterial;
		this->color = color;
		this->modeofcntrl = modeofcntrl;
	}

	void  display()
	{
		cout << wheel << "\t" << NoSeat << "\t" << meterial << "\t" << color << "\t" << modeofcntrl << "\t";
	}
};


class car : public vehicle
{
private:
	string brand;
	string fueltype;
	int doors;
	float price;
	string varientType;
	string model;
public:
	car(int wheel, int noSeat, string meterial, string color, string modeofcntrl,string brand, string fueltype, int doors, float price, string varientType, string model): vehicle(wheel, NoSeat, meterial color, modeofcntrl)
	{
		this->brand = brand;
		this->fueltype = fueltype;
		this->doors = doors;
		this->price = price;
		this->varientType = varientType;
		this->model=model;
	}
};