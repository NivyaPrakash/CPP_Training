#include<iostream>
using namespace std;

int main()
{
	int amtInHand;
	cout << "Enter the amount in hand:" << endl;
	cin >> amtInHand;
	if (amtInHand >= 10 and amtInHand <= 50)
	{
		cout << "I can order snacks" << endl;
	}
	else if (amtInHand > 50 and amtInHand <= 100)
	{
		cout << "i can order rotis" << endl;
	}
	else if (amtInHand > 100 and amtInHand <= 500)
	{
		cout << "I can order for complete meals" << endl;
	}
	else
	{
		cout << "I can order anything" << endl;
	}
	cout << "End of Program" << endl;
}


