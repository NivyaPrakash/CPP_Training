#include<iostream>
using namespace std;
void f()
{
	cout << "hello";
}

int main()
{
	auto greet = []() {cout << "Hello world" << endl;};
	f();
	greet();
}