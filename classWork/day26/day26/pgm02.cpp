#include<iostream>
using namespace std;
#include<cstring>

class student
{
private:
	int rollno;
	char name[20];
	char dept[20];
	float marks[4];
public:
	void setName(char* s)
	{
		strcpy(name, s);
	}
	char* getName() {
		return name;
	}

	void setRollno(int r) {
		rollno = r;
	}
	int getRollno() {
		return rollno;
	}
	void setDept(char* d)
	{
		strcpy(dept, d);
	}
	char* getDept()
	{
		return dept;
	}
	void setMarks(float m[]) {
		for (int i = 0;i < 4;i++)
			marks[i] = m[i];

	}
	
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollno << endl;
		cout << "Department:" << dept << endl;
		for (int i = 0;i < 4;i++)
			cout <<"mark"<<i+1 <<":" << marks[i] << "\t";
		
	}

};

int main()
{
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	float m[] = { 10,10,10,10 };
	char d[] = "CS";
	student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setDept(d);
	s1.setMarks(m);
	s1.display();
	
	
	return 0;
}
