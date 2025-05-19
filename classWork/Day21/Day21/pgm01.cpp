#include<iostream>
using namespace std;
//define user defined ddatatype
struct book
{
	int isbin;
	float price;
	char title[20];
	char publication[20];
	char author[20];
};

int main()
{
	int a=10;
	struct book b1; //declaration of the variable od uuddt-variable declaration
	cout << sizeof(b1);

	struct book b2 = { 1001,200.50,"c++","PBP","yeswanth" };//declaration with initialization.
	cout << a;
	cout << "isbin:" << b2.isbin << endl;//access the elements 2 types-  .   and ->
	struct book* b3=(struct book*);
	//cout << "isbin:" << b3->isbin << endl;
	cout << sizeof(b2)<<endl;
	cout << sizeof(b3);
}