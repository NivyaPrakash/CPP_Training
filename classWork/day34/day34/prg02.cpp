#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	ifstream fIn("emp.txt");
	if (!fIn.is_open())
		cerr << "Error:opening the file" << endl;
	while (getline(fIn, line))
		cout << line<<endl;
	fIn.close();
}