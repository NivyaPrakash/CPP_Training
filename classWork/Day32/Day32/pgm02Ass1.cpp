#include<iostream>
using namespace std;
class Vehicle
{
protected:
	string make;
	string model;
public:
	Vehicle(string mk, string mod) :make(mk), model(mod)
	{
		cout << "Starting generic vehicle" << endl;
		cout << "stopping the generic vehicle" << endl;
	}
	void start()
	{
		cout << "starting the"<< make<<" "<<model<< endl;
	}
	void stop()
	{
		cout << "stopping the" <<make<<" "<<model<< endl;
	}
};

class Car:public Vehicle
{
protected:
	int noDoors;
public:
	Car(string mk, string mod, int door) :Vehicle(mk, mod), noDoors(door)
	{

	}
	void honk()
	{
		 cout << "Honking the horn of " << make << " " << model << endl;
	}
};

int main() {
	Car c1("Toyota", "Camry", 4);
	c1.start();
	c1.honk();
	c1.stop();
	return 0;
}