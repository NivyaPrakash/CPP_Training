#include<iostream>
using namespace std;


class DeliveryTip
{
private:
	string oid;
	int billamt;
	int dis;
	int tip;
public:
	DeliveryTip(string id, int am,int d )
	{
		oid = id;
		billamt = am;
		dis = d;

	}

	int calculateTip()
	{

		if (dis < 5)
		{
			tip = billamt * 0.05;
		}
		else if (dis >= 5 && dis <= 10)
		{
			tip = billamt * 0.10;
		}
		else {
			tip = billamt * 0.15;
		}
		return tip;
		
	}
	void printDetails()
	{
		cout << "Order" <<" "<< oid<<" " << "| "<<" " << "Tip:" << calculateTip();
	}

	

};

int main()
{
	DeliveryTip d1("ORD1", 500, 3);
	d1.printDetails();

	cout << endl;

	DeliveryTip d2("ORD2", 1000, 12);
	d2.printDetails();
}
