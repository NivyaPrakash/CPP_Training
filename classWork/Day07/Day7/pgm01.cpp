//do while example

#include<iostream>
using namespace std;
/*
int main()
{
	int i;
	i = 0;
	do
	{
		cout << i++ << endl;

	} while (i < 5);
}
*/

#define MAXBITES 10
int main()

{
	int taste = 0;
	int plateEmpty = MAXBITES;
	do {
		cout << "Have a byte of the food" << endl;
		plateEmpty--;
		cout << "How is the taste of food(0/1):";
		cin >> taste;

	} while ((taste > 0) && (plateEmpty > 0));
	if (plateEmpty == 0)
	{
		cout << "person stopped eating as the plate was empty" << endl;
		cout << "And the food was awesome" << endl;
	}
	if(taste==0)
	{
		cout << "The taste not good enough after having " << (MAXBITES - plateEmpty);
		cout << "bites of food" << endl;
	}
	return 0;
}