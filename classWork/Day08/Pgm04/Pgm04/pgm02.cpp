#include<iostream>
#include "fibo.h"
using namespace std;
int fibo(int n)
{
	int t,i,f=1,s=1;
	
	cout << f << s;
	 for(i = 1;i < n;++i)
	{
		t = f + s;
		cout << t;
		f = s;
		s = t;
		
		return 0;
	}
}