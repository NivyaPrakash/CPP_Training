#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
class Emp
{
private:
	int id;
	string name;
	char g;
	int sal;
public:
	Emp(int id,string name,char g,int sal):id(id),name(name),g(g),sal(sal){}
	void disp()
	{
		cout << "ID:" << id << endl;
		cout<< "name:" << name;
		cout << "Gender:" << g;
		cout << "salary:" << sal;
	}

	

};
int main()
{
	Emp e1(101, "abc1",'m',100000);
	Emp e2(102, "abc2",'f',200000);
	Emp e3(103, "abc3",'m',300000);

	map<int, Emp>mapEmp;
	


	mapEmp[101] = e1;
	mapEmp[102] = e2;
	mapEmp[103] = e3;
	

	for (auto p : mapEmp)
		p.second.disp();
}