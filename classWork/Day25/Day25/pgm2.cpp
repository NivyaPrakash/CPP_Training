#include<iostream>
#include<cstring>
using namespace std;




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

void printDetails(EMP);
void addEmployee(EMP, int);
void deleteEmployee(EMP, int);
void searchEmployee(EMP, int);
void updateEmployee(EMP, int);


void printDetails(EMP e[])
{
    cout << "Enter employee details" << endl;
    cout << e->empID << endl;
    cout << e->empName << endl;
    cout << e->D.day<< "\t"<<e->D.mnth<<"\t"<<e->D.year<<endl;
    cout << e->sal << endl;
}



void addEmployee(EMP e[], int& count)
{
    if (count >=1000) {
        cout << "Inventory is full.\n";
        return;
    }
    cout << "Enter employee ID: ";
    cin >> e[count].empID;
    cin.ignore();
    cout << "Enter the employee name:" << endl;
    cin.getline(e->empName, 20);
    cout << "Enter the join date" << endl;
    cin >> e->D.day>>e->D.mnth>>e->D.year;
    cout << "Enter salary" << endl;
    cin >> e->sal;
    count++;
    cout << "Employee added successfully.\n";
}

void deleteEmployee(EMP e[], int& count) {
    int id;
    cout << "Enter Product ID to delete: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (e[i].empID == id) {
            for (int j = i; j < count - 1; j++) {
                e[j] = e[j + 1];
            }
            count--;
            cout << "Product deleted successfully.\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void searchEmployee(EMP e[], int count) {
    int id;
    cout << "Enter Product ID to search: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (e[i].empID == id) {
            cout << "Employee Found:\n";
            cout << "ID: " << e[i].empID << endl;
            cout << "Name: " << e[i].empName << endl;
            cout << "Join date: " << e[i].D.day<<"\t"<< e[i].D.mnth <<"\t" << e[i].D.year << endl;
            cout << "salary: " << e[i].sal << endl;
            return;
        }
    }
    cout << "Employee not found.\n";
}


void updateEmployee(EMP e[], int count) {
    int id;
    cout << "Enter employee ID to update: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (e[i].empID == id) {
            cout << "Enter new employee Name: ";
          
            cin.getline(e->empName, 20);
            cout << "Enter new Quantity: ";
            cin >> e[i].D.day>>e[i].D.mnth>>e[i].D.year;
            cout << "Enter new salary: ";
            cin >> e[i].sal;
            cout << "Employee updated successfully.\n";
            return;
        }
    }
    cout << "employee not found.\n";
}





void menu()
{
    cout << "\nInventory Management System\n";
    cout << "1. Add Employee\n2. delete Employee\n3. search Employee\n4. update Employee\n5. Display All\n6. Exit\n";
}




int main() {
    EMP e[1000];
    int count = 0;
    int choice;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addEmployee(e, count); break;
        case 2: deleteEmployee(e, count); break;
        case 3: searchEmployee(e, count); break;
        case 4:updateEmployee(e, count);break;
        case 5: printDetails(e); break;
        case 6: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice. Try again.\n";

        }
    } while (choice != 6);

    return 0;
}

