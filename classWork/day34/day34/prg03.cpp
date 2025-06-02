#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("emp.txt",ios::trunc|ios::app);
	int n = 2;
	//for (int i = 1;i <= 10;i++)
	//{
		//fout << i << "*" << n << "=" << n * i << endl;
	
	//}
	fout << "Name1:" << "Id:" << "salary" << endl;
	fout.close();
}
