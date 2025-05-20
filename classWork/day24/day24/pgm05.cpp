#include<iostream>
using namespace std;
#define depts 3
#define noemp 5

typedef struct Employees
{
	int e_id;
	char e_name;
}EMP;



int main()
{
	EMP** e = nullptr;
	e = (EMP**)malloc(depts * sizeof(EMP*));
	for (int i = 0;i < depts;i++)
	{
		e[i] = (EMP*)malloc(noemp * sizeof(EMP));
		cout<<"Address ofe["<<i<<"]"<<(unsigned long int)e[i]<<endl;
		cout<<"Enter the empoyee details dept-wise"<<endl;
		for (int i = 0;i < depts;i++)
		{
			cout << "Department" << (i + 1) << endl;
			for (j = 0;j < noemp;j++)
			{
				cout << "ID:" << e[i]->e_id;
				cout << "Name:" << e[i]->e_name;

			}
		}			
	}
}