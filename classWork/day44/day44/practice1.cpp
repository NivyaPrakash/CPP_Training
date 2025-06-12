#include<iostream>
#include<thread>
using namespace std;
void disp()
{
	for (int i = 1;i <= 10;i++)
		cout << i<<" ";
}

void disp2()
{
	for (int i = 11;i <= 20;i++)
		cout << i<<" ";
}

int main()
{
	thread t1(disp);
	t1.join();
	thread t2(disp2);
	t2.join();
}