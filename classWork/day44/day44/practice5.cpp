#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void disp(char c)
{
	static int count = 0;
	for (int i = 0;i < 5;)
	{
		m.lock();

		if (count % 3 == 0 && c == 'A')
		{
			cout << c<<" ";
			i++;
			count++;
		}
		else if (count % 3 == 1 && c == 'B')
		{
			cout << c<<" ";
			i++;
			count++;
		}
		else if (count % 3 == 2 && c == 'C')
		{
			cout << c<<" ";
			i++;
			count++;
		}m.unlock();
	}
}


int main()
{
	thread t1(disp, 'A');
	thread t2(disp, 'B');
	thread t3(disp, 'C');
	t1.join();
	t2.join();
	t3.join();
}