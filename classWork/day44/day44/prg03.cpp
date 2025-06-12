#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void addmoney(int& x)
{
	m.lock();
	x += 50;
	cout << "ADD:" << x << endl;
	m.unlock();
}

void submoney(int& x)
{
	m.lock();
	x -= 100;
	cout << "SUB:" << x << endl;
	m.unlock();
}

int main()
{
	int val = 200;
	thread t1(addmoney, ref(val));
	thread t2(addmoney, ref(val));
	t2.join();
	t1.join();
}