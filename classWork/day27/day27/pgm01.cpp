#include<iostream>
using namespace std;


class retailsys
{
private:
	int prod_id;
	char prod_name[20];
	int quantity;
	int price;
public:
	void setproid(int);
	int getproid();
	void setproname(char* );
	char* getproname();
	void setquantity(int);
	int getquantity();
	void setprice(int);
	int getprice();
	void additem(int,char*,int,int,int);
};

void retailsys :: setproid(int id)
{
	prod_id = id;
}
int  retailsys::getproid()
{
	return prod_id;
}
void retailsys::setproname(char* s)
{
	strcpy(prod_name,s);
}
char* retailsys::getproname()
{
	return prod_name;
}

void retailsys::setquantity(int q)
{
	quantity = q;
}
int  retailsys::getquantity()
{
	return quantity;
}

void retailsys::setprice(int p)
{
	price = p;
}
int  retailsys::getprice()
{
	return price;
}


void retailsys::additem(int count,  char* prod_name, int prod_id, int quantity,int price)
{
	if (count >= 100)
	{
		cout << "inventory full" << endl;
	}
	else
	{
		cout << "Enter product id:" << endl;
		cin >> prod_id;
		cout << "Enter the product name:" << endl;
		cin>>
	}
}