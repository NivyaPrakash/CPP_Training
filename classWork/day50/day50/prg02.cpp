#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    string address;
    int phno;

public:
    person(string name, string address, int phno)
        : name(name), address(address), phno(phno) {}

    string getname() { return name; }
    string getaddress() { return address; }
    int getphno() { return phno; }

    void setname(string name) { this->name = name; }
    void setaddress(string address) { this->address = address; }
    void setphno(int phno) { this->phno = phno; }
};

class Employee : public person {
protected:
    int empid;
    float esalary;
    int pid;

public:
    Employee(string name, string address, int phno, int empid, float esalary, int pid)
        : person(name, address, phno), empid(empid), esalary(esalary), pid(pid) {}

    virtual void display() {
        cout << "Employee Name: " << name << "\nAddress: " << address
            << "\nPhone: " << phno << "\nEmpID: " << empid
            << "\nSalary: " << esalary << "\nPID: " << pid << endl;
    }
};

class Manager : public Employee {
    string role;
    float DA;
    string username;
    string password;

public:
    Manager(string name, string address, int phno, int empid, float esalary, int pid,
        string role, float DA, string username, string password)
        : Employee(name, address, phno, empid, esalary, pid),
        role(role), DA(DA), username(username), password(password) {}

    void display() override {
        Employee::display();
        cout << "Role: " << role << "\nDA: " << DA
            << "\nUsername: " << username << endl;
    }
};

class Admin : public Employee {
    string role;
    bool prv;

public:
    Admin(string name, string address, int phno, int empid, float esalary, int pid,
        string role, bool prv)
        : Employee(name, address, phno, empid, esalary, pid), role(role), prv(prv) {}

    void createEmployee() {
        string name, address, username, password;
        int phno, empid, pid;
        float salary;

        cout << "Enter Employee Name: ";
        cin.ignore(); getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Phone Number: ";
        cin >> phno;
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter PID: ";
        cin >> pid;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        Employee e(name, address, phno, empid, salary, pid);
        e.display();
        cout << "Username: " << username << "\nPassword: " << password << endl;
    }

    void createManager() {
        string name, address, role, username, password;
        int phno, empid, pid;
        float salary, DA;

        cout << "Enter Manager Name: ";
        cin.ignore(); getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Phone Number: ";
        cin >> phno;
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter PID: ";
        cin >> pid;
        cout << "Enter Role: ";
        cin.ignore(); getline(cin, role);
        cout << "Enter DA: ";
        cin >> DA;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        Manager m(name, address, phno, empid, salary, pid, role, DA, username, password);
        m.display();
    }
};

int main() {
    int choice;
    cout << "Enter choice:\n1. Admin\n2. Employee\n3. Manager\nChoice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        Admin admin("AdminUser", "HQ", 9999999999, 100, 70000.0, 0, "Administrator", true);
        int subChoice;
        cout << "\nAdmin Panel:\n1. Create Employee\n2. Create Manager\nEnter your choice: ";
        cin >> subChoice;

        if (subChoice == 1) {
            admin.createEmployee();
        }
        else if (subChoice == 2) {
            admin.createManager();
        }
        else {
            cout << "Invalid sub-choice!" << endl;
        }
        break;
    }
    case 2: {
        Employee e("John Doe", "CityX", 8888888888, 101, 45000, 1);
        e.display();
        break;
    }
    case 3: {
        Manager m("Jane Smith", "CityY", 7777777777, 102, 55000, 2, "Team Lead", 6000, "janesmith", "pass123");
        m.display();
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
