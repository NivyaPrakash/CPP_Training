#include<iostream>
using namespace std;

class digitalclock
{
private:
	int hour;
	int minute;
	int second;
public:
	void setMinute(int);
	int getMinute();
	void setSecond(int);
	int getSecond();
	void setHour(int);
	int getHour();
	void display();
	void digital();

};


void digitalclock::setMinute(int m) {
	minute = m;
}
int digitalclock::getMinute() {
	return minute;
}

void digitalclock::setSecond(int s) {
	second = s;
}
int digitalclock::getSecond() {
	return second;
}


void digitalclock::setHour(int h) {
	hour=h;
}
int digitalclock::getHour() {
	return hour;
}



void digitalclock:: digital()
{
	second++;
	if (second == 60)
	{
		second = 0;
		minute++;
	}
	if (minute == 60)
	{
		minute = 0;
		hour++;
	}
	if (hour == 60)
	{
		hour = 0;
	}

}


void digitalclock :: display()
{
	cout << "minute:" << minute;
	cout << "hour:" <<hour ;
	cout << "second:" <<second;
}



int main()
{
	int m = 23;
	int h = 50;
	int s = 40;
	
	digitalclock c;
	c.setSecond(s);
	c.setMinute(m);
	c.setHour(h);
	c.digital();
	c.display();
}
