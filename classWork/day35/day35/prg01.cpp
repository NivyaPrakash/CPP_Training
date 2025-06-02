#include<iostream>
using namespace std;
class myArray
{
	int* data;
	

public:
	myArray(int val)
	{
		data = new int(val);
		
	}
	myArray(const myArray& fobj)
	{
		cout<<"copy constructor got called"<<endl;
		data = new int(*fobj.data);
	}
	void setValue(int val) { *data = val; }
	


	void display()
	{
			cout << " \t" << *data<<endl;
			cout << "Address of data:" << data << endl;
	
	}


~myArray()
{
	delete data;
}

};


int main()
{
	myArray a1(10);
	a1.display();
	myArray a2 = a1;
	a2.display();
	a2.setValue(20);

	a1.display();
	a2.display();



	return 0;
}