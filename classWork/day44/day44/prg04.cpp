#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

class counter
{
	int x;
	mutex m;
public:
	counter():x(0){}
	void increment(int a)
	{
		for (int i = 0;i < 5;i++)
		{
			m.lock();
			x += 2;
			cout << "increment by:" << x << endl;
			m.unlock();
		}
	}int getx()
	{
		return x;
	}
};


int main()
{
	counter c;
	thread t1(&counter::increment, &c,5);
	thread t2(&counter::increment, &c, 5);
	t2.join();
	t1.join();
}