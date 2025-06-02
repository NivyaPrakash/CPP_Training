#include<iostream>
#include<fstream>
using namespace std;
struct Employee
{
	int id;
	char name[20];

};


class student
{
private:
	int id;
	char name[20];
public:
	student(int id, char* name) { this->id = id;strcpy(this->name, name); }
};

int main()
{
	fstream fIO;
	struct Employee  e = { 101,"Amit" };
	
	fIO.open("emp.txt", ios::in | ios::out);
	if (!fIO.is_open())
	{
		cerr << "Error :opening the file" << endl;
	}
	
	struct Employee e1;
	fIO.read((char*)&e1, sizeof(e1));
	cout << e1.id << "\t" << e1.name << endl;
	
	fIO.close();
	return 0;
}