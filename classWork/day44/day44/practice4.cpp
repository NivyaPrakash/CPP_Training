#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void disp(bool flag)
{
	static bool pp = false;
	for (int i = 0;i < 10;)
	{ 
		m.lock();
		if (flag == true && pp==false)
		{
			cout << "ping" << endl;
			pp = true;
			i++;
		}
		else if(flag==false && pp==true)
		{
			cout << "pong" << endl;
			pp = false;
			i++;
		}m.unlock();
	}
}

int main()
{
	thread t1(disp, false);
	thread t2(disp, true);
	t1.join();
	t2.join();
}