//calculate cost price of a item
#include<iostream>
using namespace std;



int main()
{
	int selPrice, profit, costPrice;
	cout << "selling price:" << endl;
	cin >> selPrice;
	cout << "Enter profit:" << endl;
	cin >> profit;
	costPrice = selPrice - profit;
	cout << "Actual cost=" << costPrice;
}