#include<iostream>
using namespace std;
int main()
{
	string err = "bhima";
	string dbyZeroErr = "devided by zero error occured";
	
	char nullptrErr[] = "Memory allocation failed";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try
	{
		//if (n2 == 0)
			//throw dbyzeroErr;
		if (ptr == nullptr)
			throw nullptrErr;

	}
	catch (int e)
	{
		cout << "Caught an exception e:"<<e << endl;
	}
	catch (const string e)
	{
		cout << "caught an exception " << e<<endl;
	}
	return 0;
}