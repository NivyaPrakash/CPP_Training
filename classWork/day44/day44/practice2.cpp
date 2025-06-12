#include<iostream>
#include<thread>
using namespace std;

void oddEven(int n,bool flag)
{
	for (int i = 1;i < n;i++)
	{
		if (flag == true && i%2==0)
		{
			cout << i << " ";
		}
		else if(flag==false && i%2!=0)
		{
			cout << i << " ";
		}
	}
}

int main()
{
	thread t1(oddEven, 10,false);
	t1.join();
	thread t2(oddEven, 10,true);
	t2.join();
}