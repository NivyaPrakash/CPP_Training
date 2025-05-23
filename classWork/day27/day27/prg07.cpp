#include<iostream>
using namespace std;
class bank
{
private:
	int accno;
	static int accountCount;
public:
	bank()
	{
		accountCount++;
		accno = accountCount;
	}
	
};