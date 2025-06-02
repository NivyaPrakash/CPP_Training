#include<iostream>
using namespace std;
template <class T1,class T2>
class Box
{
private:
	T1 data1;
	T2 data2;
public:
	Box(T1 value1,T2 value2) :data1(value1),data2(value2 ){}
	void printData() { cout << "Data1:" << data1<<"\n"<<"data2:"<<data2 << endl; }
};

int main()
{
	Box <int,string>intBox(10,"abcde");
	Box<string,float>stringBox("abcde",10.3);
	intBox.printData();
	stringBox.printData();
}