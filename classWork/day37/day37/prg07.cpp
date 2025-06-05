#include<iostream>
using namespace std;
#include<vector>
class student
{
	int id;
	string name;
public:
	student(int id, string name) :id(id), name(name) {}
	void display()
	{
		cout << "ID:" << id;
		cout << "Name:" << name;
		cout << endl;
	}
};


int main()
{
	student s[3] = { {101,"abc1"},{102,"abc2"},{103,"abc3"} };
	student s1 = { 104,"abc4" };
	student s2 = { 105,"abc5" };
	student s3 = { 106,"abc6" };



	

	


	vector<student>emp;
	emp.push_back(s1);
	emp.push_back(s2);
	emp.push_back(s3);


	for (auto e : s)
		e.display();


	cout << emp.capacity() << endl;
	cout << emp.size() << endl;
	emp.front().display();
	emp.back().display();


}
	
