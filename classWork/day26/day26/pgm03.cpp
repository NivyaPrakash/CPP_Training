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
	void setName(char*);
	char* getName();
	void setRollno(int r);
	int getRollno();
	void setDept(char*);
	char* getDept();
	void setMarks(float[]);
	void display();
private:
	float calcAvg();
	void gradesys(float);


};

void student:: setName(char* s)
{
	strcpy(name, s);
}
char* student:: getName() {
	return name;
}

void student :: setRollno(int r) {
	rollno = r;
}
int student :: getRollno() {
	return rollno;
}
void student:: setDept(char* d)
{
	strcpy(dept, d);
}
char* student :: getDept()
{
	return dept;
}
void student :: setMarks(float m[]) {
	for (int i = 0;i < 4;i++)
		marks[i] = m[i];

}

float student::calcAvg() {
	float avg = 0.0,av;
	for (int i = 0;i < 4;i++) {
		cout <<"mark"<<i+1<<":"<< marks[i] << "\t";
		avg += marks[i];
	}
	return avg / 4.0;
}

void student::gradesys(float avg)
{
	
	if (avg >= 75 && avg <= 100)
		cout << "A";
	else if (avg >= 60 && avg <= 75)
		cout << "B";
	else if (avg >= 50 && avg <= 60)
		cout << "C";
	else if (avg >= 40 && avg <= 50)
		cout << "D";
	else
		cout << "F";
}



void student :: display()
{
	cout << "Name: " << name << endl;
	cout << "Roll No: " << rollno << endl;
	cout << "Department:" << dept << endl;
	cout << "average:";
	float avg = calcAvg();
	cout << endl;
	cout << "Grade:";
	gradesys(avg);
}



int main()
{
	char n[] = "Nivya";
	char str2[1024] = "xyz";
	int r = 1011;
	float m[] = { 80,90,70,75 };
	char d[] = "CS";
	student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setDept(d);
	s1.setMarks(m);
	s1.display();
	
	
	return 0;
}
