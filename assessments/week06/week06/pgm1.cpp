#include<iostream>
using namespace std;


class Flight
{
private:
	string flightNo;
	int totalseat;
	int bookseat;
public:
	Flight(string no,int t)
	{
		flightNo = no;
		totalseat = t;
		
	}
	
	void bookSeats(int b)
	{
		bookseat = b;
		int av = totalseat - bookseat;
		if (bookseat >= av)
		{
			cout << "Booking Failed: Not enough seats.";
		}
	}
	

	void showAvailability()
	{
		int av = totalseat-bookseat;
		if (bookseat >= av)
		{
			cout << "Booking Failed: Not enough seats.";
		}
		else
		{
			cout << "Flight:" << flightNo << "|" << "Seats Available : " << av;
		}
	}

};

int main()
{

	Flight f1("AI203", 100);
	f1.bookSeats(30);
	f1.showAvailability();

	cout << endl;

	f1.bookSeats(80);
	
	
}
