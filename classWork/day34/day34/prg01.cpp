#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("emp.txt");
	int n = 2;
	for (int i = 1;i <= 10;i++)
	{
		fout << i <<"*"<<n<<"=" << n * i << endl;
	}
	fout.close();
}
