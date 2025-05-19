#include <iostream>

using namespace std;


typedef struct Employee
{
	int empID;
	
	string empName;
	
}EMP;

void disp(EMP);

int getEmpDetails(EMP*);


int main()
{
	EMP e1;

	getEmpDetails(&e1);
	EMP e[3];
	for (int i = 0;i < 3;i++) {
		getEmpDetails(&e[i]);

	}



	for (int i = 0;i < 3;i++)
	{
		disp(e[i]);
	}

	cout << endl;

	return 0;
}

void disp(EMP e)
{
	cout << "===========================================" << endl;
	cout << "Name: " << e.empName << endl;
	cout << "ID: " << e.empID << endl;
	
	cout << "===========================================" << endl;
}


int getEmpDetails(EMP* e)
{
	cout << "Name: ";cin >> e->empName;
	cout << "ID: "; cin >> e->empID;
	

	return EXIT_SUCCESS;
}