#include <iostream>
using namespace std;

typedef struct Employee {
    int empID;
    string empName;
} EMP;

typedef struct Period {
    int month;
    int year;
} PERIOD;

typedef struct Salary {
    double basic;
    double hra;
    double allowance;
    double netPay;
} SAL;

int getEmpDetails(EMP*);
int getPeriodDetails(PERIOD*);
int getSalaryDetails(SAL*);
void calculateNetPay(SAL*);
void dispPayroll(EMP, PERIOD, SAL);

int main() {
    EMP e[3];
    PERIOD p[3];
    SAL s[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for employee " << i + 1 << endl;
        getEmpDetails(&e[i]);
        getPeriodDetails(&p[i]);
        getSalaryDetails(&s[i]);
        calculateNetPay(&s[i]);
    }

    for (int i = 0; i < 3; i++) {
        dispPayroll(e[i], p[i], s[i]);
    }

    return 0;
}

int getEmpDetails(EMP* e) {
    cout << "Enter Name: ";
    cin >> e->empName;
    cout << "Enter ID: ";
    cin >> e->empID;
    return EXIT_SUCCESS;
}

int getPeriodDetails(PERIOD* p) {
    cout << "Enter Month (1-12): ";
    cin >> p->month;
    cout << "Enter Year: ";
    cin >> p->year;
    return EXIT_SUCCESS;
}

int getSalaryDetails(SAL* s) {
    cout << "Enter Basic Salary: ";
    cin >> s->basic;
    cout << "Enter HRA: ";
    cin >> s->hra;
    cout << "Enter Allowance: ";
    cin >> s->allowance;
    return EXIT_SUCCESS;
}

void calculateNetPay(SAL* s) {
    s->netPay = s->basic + s->hra + s->allowance;
}

void dispPayroll(EMP e, PERIOD p, SAL s) {
    cout << "\n===========================================" << endl;
    cout << "Employee ID: " << e.empID << endl;
    cout << "Employee Name: " << e.empName << endl;
    cout << "Pay Period: " << p.month << "/" << p.year << endl;
    cout << "Basic: " << s.basic << ", HRA: " << s.hra << ", Allowance: " << s.allowance << endl;
    cout << "Net Pay: " << s.netPay << endl;
    cout << "===========================================\n";
}
