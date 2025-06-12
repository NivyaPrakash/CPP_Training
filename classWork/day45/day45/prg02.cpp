#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;
bool isping = false;
condition_variable cv;
void pong()
{
	for (int i = 0;i < 10;)
	{
		unique_lock<mutex>lock(mtx);
		cv.wait(lock, [] {return isping;});
		cout << "pong" << endl;
		i++;
		isping = false;
		cv.notify_one();
	}
}


void ping()
{
	for (int i = 0;i < 10;)
	{
		unique_lock<mutex>lock(mtx);
		cv.wait(lock, [] {return !isping;});
		cout << "ping" << endl;
		i++;
		isping = true;
		cv.notify_one();
	}
}

int main()
{
	thread t1(ping);
	thread t2(pong);
	t1.join();
	t2.join();
}
