#include<iostream>
#include<list>
using namespace std;
bool isOdd(int x) { return x % 2 != 0; }

int main()
{
	std::list<int>l1 = { 10,20,30,40 };
	l1.push_front(5);
	l1.push_back(50);
	l1.emplace_back(55);
	l1.emplace_front(2);
	l1.insert(l1.begin(), 1);
	cout << "after insertion" << endl;
	for (auto i : l1)
	{
		cout << i<<" ";
	}cout << endl;



	l1.remove_if(isOdd);
	cout << "after remove odd" << endl;
	for (int x : l1)
	{
		cout << x<< " ";
	}cout << endl;


	l1.remove(20);
	cout << "after remove" << endl;
	for (auto i : l1)
	{
		cout << i << " ";
	}cout << endl;


	l1.reverse();
	cout << "after reverse" << endl;
	for (auto i : l1)
	{
		cout << i << " ";
	}cout << endl;


	l1.clear();
	cout << "Size after clear: " << l1.size() << "\n";

}