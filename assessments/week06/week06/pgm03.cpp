#include<iostream>
using namespace std;


class Luggage
{
private:
	string name;
	int weight;
	int limit;

public:
	Luggage(string n, int w)
	{
		name = n;
		weight = w;

	}

 void  checkOverweight()
	{
		limit =  weight-20;
		if (weight > 20)
		{
			cout << "Overweight! Exceeded by"<<" " << limit << "  kg.";
		}
		else
		{
			cout << "Luggage within limit";
		}

	}
	



};

int main()
{
	Luggage l1("Rita", 18);
	l1.checkOverweight();

	cout << endl;
	Luggage l2("Sam", 25);
	l2.checkOverweight();
}
