#include<iostream>
using namespace std;

int main()
{
	string genre;
	cout << "Enter the genre:";
	cin >> genre;
	if (genre[0] >= 47 && genre[0] >= 57)
	{
		cout << "Genre name cant start with numeric characters" << endl;
		return 0;
	}

	
	if (genre.compare("Action") == 0)
	{
		cout << "selected genre is Action" << endl;
	}
	else if (genre.compare("Thriller") == 0)
	{
		cout << "selected genre is Thriller" << endl;

	}
	else if ((genre.compare("Comedy") == 0) || (genre.compare("comedy") == 0))
	{
		cout << "selected genre is Comedy" << endl;

	}
	else
	{
		cout << "Genre is not present" << endl;
	}
	cout << "end of program" << endl;
}




