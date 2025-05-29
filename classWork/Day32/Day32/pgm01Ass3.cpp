#include<iostream>
using namespace std;
class Vehicle
{
protected:
	int price;
public:
	Vehicle(int p):price(p){}
	
};


class Car:public Vehicle
{
protected:
	int seatCap;
	int noDoors;
	string fuelType;
public:
	Car(int p, int cap, int door, string type) :Vehicle(p), seatCap(cap), noDoors(door), fuelType(type){}

};

class MotorCycle:public Vehicle
{
protected:
	int noofcylinders;
	int noofGears;
	int noofwheels;
public:
	MotorCycle(int p, int cy, int gr, int wh) :Vehicle(p), noofcylinders(cy), noofGears(gr), noofwheels(wh) {}
};


class Audi :public Car
{
protected:
	string modeltype;
public:
	Audi(int p,int cap, int door, string type,string mtype):Car(p,cap,door,type), modeltype(mtype){}
	void dispAudi()
	{
		cout << "AUDI" << endl;
		cout << "Price:" << price << endl;
		cout << "seating capacity:" << seatCap << endl;
		cout << "number of doors:" << noDoors << endl;
		cout << "fuel type:" << fuelType << endl;
		cout << "Model type:" << modeltype << endl;
		cout << "======================================" << endl;
	}

};

class Yamaha :public MotorCycle
{
protected:
	string make;
public:
	Yamaha(int p,int cy, int gr, int wh, string mk) :MotorCycle(p,cy, gr, wh), make(mk){}
	void dispYamaha()
	{
		cout << "YAMAHA" << endl;
		cout << "price:" << price << endl;
		cout << "No of Gears:" << noofGears<<endl;
		cout << "No of wheels:" << noofwheels << endl;
		cout << "Make type:" << make << endl;
		cout << "======================================" << endl;
	}

};

int main()
{
	Audi a(35, 5, 4, "petrol", "RS");
	a.dispAudi();
	Yamaha y(68, 2, 4, 2, "plastic");
	y.dispYamaha();
	
}