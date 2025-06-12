#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void disp(bool flag)
{
	
	for (int i = 1;i <= 20;)
	{
		m.lock();
		if (flag == true &&  i%2==0)
		{
			cout << i << endl;
			i++;
			flag = false;
		}
		else if (flag == false &&  i%2 !=0)
		{
			cout  << i << endl;
			flag = true;
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