#include<iostream>
using namespace std;


class Flight
{
private:
	int flightNo;
	int totalseat;
	int bookedseat;
public:
	void setflightNo(int);
	int getflightNo();
	void settotalseat(int);
	int gettotalseat();
	void setbookedseat(int);
	int getbookedseat();
	void showAvailability(int,int);


};


void Flight::setflightNo(int n)
{
	flightNo = n;
}

int Flight::getflightNo()
{
	return flightNo;
}

void Flight::settotalseat(int ts)
{
	totalseat = ts;
}

int Flight::gettotalseat()
{
	return totalseat;
}

void Flight::setbookedseat(int bs)
{
	bookedseat = bs;
}

int Flight::getbookedseat()
{
	return bookedseat;
}

void Flight::showAvailability(int totalseat,int bookedseat)
{
	int availability = bookedseat - totalseat;
}


int main
