#include<iostream>
#include "file2.h";
using namespace std;
void enumHandling()
{
	enum Day { Monday,tuesday,Wednesday,Thursday,Friday,Saturday,Sunday };
	Day Today = Wednesday;
	cout << "value of wednesday:" << Today << endl;

}