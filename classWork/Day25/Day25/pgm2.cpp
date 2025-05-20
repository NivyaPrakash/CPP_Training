#include<iostream>

using namespace std;

void printDetails(EMP);
void addEmployee(EMP,int);


typedef struct Employee {
    int empID;
    char empName[20];
    char gender[5];
    struct joinDate
    {
        int day, mnth, year;
    }D;
    int sal;
} EMP;

void printDetails(EMP e)
{
    cout << "Enter employee details" << endl;
    cout << e.empID << endl;
    cout << e.empName << endl;
    cout << e.D.day<< "\t"<<e.D.mnth<<"\t"<<e.D.year<<endl;
    cout << e.sal << endl;
}









void addEmployee(EMP e[], int& count)
{
    if (count >=1000) {
        cout << "Inventory is full.\n";
        return;
    }
    cout << "Enter employee ID: ";
    cin >> e[count].empID;
    cout << "Enter the employee name:" << endl;
    cin.getline(e->empName, 20);
    cout << "Enter the join date" << endl;
    cin >> e->D.day>>e->D.mnth>>e->D.year;
    cout << "Enter salary" << endl;
    cin >> e->sal;
    count++;
    cout << "Employee added successfully.\n";
}



