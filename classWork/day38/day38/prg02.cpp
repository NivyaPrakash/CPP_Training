#include<iostream>
#include<list>
using namespace std;


class employee
{
	int empid;
	string empname;
public:
	employee(int id,string name):empid(id),empname(name){}
	void setid(int id)
	{
		this->empid = id;
	}
	int getid()
	{
		return empid;
	}
	void setnmae(string name)
	{
		this->empname = name;
	}
	string getname()
	{
		return empname;
	}
	void display()
	{
		cout << "id:" << empid << endl;;
		cout << "name:" << empname<<endl;
	}

	bool operator==(const employee& other) const {
		return empid == other.empid;
	}

	bool operator<(const employee& other)const
	{
		return empid==other.empid;
	}

};


void mySort(list<employee>ls)
{
	for (auto& i : ls)
	{
		for (auto& j : ls)
		{
			if (i < j)
			{
				auto t = i;
				i = j;
				j = t;
			}
		}
	}
}


int main()
{
	employee e1(101, "abc1");
	employee e2(101, "abc2");
	employee e3(103, "abc3");
	employee e4(104, "abc4");
	employee e5(105, "abc5");
	employee e6(106, "abc6");
	employee e7(107, "abc7");
	e1.display();

	std::list<employee>l1;
	l1.push_front(e1);
	l1.push_back(e2);
	l1.emplace_back(e3);
	l1.emplace_front(e4);
	l1.insert(l1.begin(), e5);
	
	for (auto i : l1)
		i.display();

	l1.reverse();
	cout << "============================" << endl;
	for (auto i : l1)
		i.display();

	l1.remove(e2);
	cout << "============================" << endl;
	for (auto i : l1)
		i.display();
	

	mySort(l1);
	cout << "============================" << endl;
	for (auto i : l1)
		i.display();


	l1.sort();
	cout << "============================" << endl;
	for (auto i : l1)
		i.display();

}
	