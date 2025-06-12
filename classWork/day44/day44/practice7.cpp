#include<iostream>
#include<thread>
#include<mutex>
#include<string>
using namespace std;
mutex m;
void disp(string s, int n, int t)
{
	for (static int i = 1;i <=n;)
	{
		m.lock();
		if (i == n + 1)
			break;
		if (t == 3 && i % 3 == 0 && i % 5 == 0)
		{
			cout << s << endl;
			i++;
		}
		 if (t == 1 && i % 3 == 0 && i % 5 != 0)
		{
			cout << s << endl;
			i++;
		}
		 if (t == 2 && i % 3 != 0 && i % 5 == 0)
		{
			cout << s << endl;
			i++;
		}s
		 if (t == 4 && i % 3 != 0 && i % 5 != 0)
		 {
			 cout << i<<endl;
			 i++;

		 }
		m.unlock();
	}
}

int main()
{
	thread t1(disp, "fizz", 20, 1);
	thread t2(disp, "buzz", 20, 2);
	thread t3(disp, "fizzbuzz", 20, 3);
	thread t4(disp, "", 20, 4);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
}