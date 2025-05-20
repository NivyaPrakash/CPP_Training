#include<iostream>
using namespace std;
#include<cstdlib>

typedef struct Employee
{
	int e_id;
	char e_name[20];
	char e_desig[30];
}EMP;

int main()
{
	//EMP e;
	//cin >> e.e_id >> e.e_name >> e.e_desig;
	//cout << e.e_id << "\t" << e.e_name << "\t" << e.e_desig;

	EMP *e = (EMP*)malloc(sizeof(EMP) * 3);
	cin >> e->e_id >> e->e_name >> e->e_desig;
	cout << e->e_id << "\t" << e->e_name << "\t" << e->e_desig;


}