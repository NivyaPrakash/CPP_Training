#include<iostream>
#define MAX 50
void salaryCalc(int);
void display(int);

using namespace std;

int empid[MAX];
string empname[MAX];
string desig[MAX];
int basic[MAX];
int allow[MAX];
int PF[MAX];
int tax[MAX];
int salary[MAX];
int red[MAX];
int deduction[MAX];
int gross[MAX];


int main()
{
    int n;
    cout << "Enter the number of employees:" << endl;
    cin >> n;
    salaryCalc(n);
    display(n);
}

void salaryCalc(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter id:" << endl;
        cin >> empid[i];

        cout << "Enter Name:" << endl;
        cin >> empname[i];

        cout << "Enter designation:" << endl;
        cin >> desig[i];

        cout << "Enter Basic:" << endl;
        cin >> basic[i];

        cout << "Enter Allowance:" << endl;
        cin >> allow[i];

        cout << "Enter PF:" << endl;
        cin >> PF[i];

        cout << "Enter Tax:" << endl;
        cin >> tax[i];
    }

    for (int i = 0; i < n; i++)
    {
        int days;
        cout << "Enter number of Days worked for Employee " << empid[i] << ":" << endl;
        cin >> days;

        if (days >= 25 && days <= 30)
        {
            deduction[i] = 0;
        }
        else if (days >= 20 && days < 25)
        {
            deduction[i] = basic[i] * (5.0 / 100);
        }
        else if (days >= 15 && days < 20)
        {
            deduction[i] = basic[i] * (10.0 / 100);
        }
        else if (days >= 10 && days < 15)
        {
            deduction[i] = basic[i] * (15.0 / 100);
        }
        else if (days >= 5 && days < 10)
        {
            deduction[i] = basic[i] * (20.0 / 100);
        }
        else
        {
            deduction[i] = basic[i];
        }

        salary[i] = basic[i] + allow[i];
        red[i] = PF[i] + tax[i];
        gross[i] = salary[i] - red[i] - deduction[i];
    }
}

void display(int n)
{
    cout << endl;
    cout << "------------------PAYSLIP----------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "id: " << empid[i] << endl;
        cout << "Name: " << empname[i] << endl;
        cout << "Designation: " << desig[i] << endl;
        cout << "Basic Pay: " << basic[i] << endl;
        cout << "Allowance: " << allow[i] << endl;
        cout << "PF: " << PF[i] << endl;
        cout << "Tax: " << tax[i] << endl;
        cout << "Gross Reduction: " << red[i] << endl;
        cout << "Gross Pay: " << gross[i] << endl;

        cout << "-------------------------------------------------" << endl;
    }
}
