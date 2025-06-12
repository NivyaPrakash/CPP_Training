#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;

void disp()
{
	
	static int count = 0;
	for (int i = 0;i < 1000;i++)
	{
		m.lock();
		cout << count++ << endl;
		m.unlock();
	}
}

int main()
{
	
	thread t1(disp);
	thread t2(disp);
	thread t3(disp);
	t3.join();
	t2.join();
	t1.join();
}