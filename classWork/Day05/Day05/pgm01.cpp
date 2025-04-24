#include<iostream>
using namespace std;
enum genre {
	Action=1,
	Comedy,
	Thriller,
	Mystery,
	SiFi
};

enum language {
	English=1,
	Hindi,
	Tamil,
	Kannada,
	Marathi,
	Malayalam
};
int main()
{
	int inputlang;
	char typeShows[20];
	int InputGenre;
	cout << "Enter the language:" << endl;
	cin >> inputlang;


	switch (inputlang)
	{
	case English:
		cout << "you have choosen English" << endl;
		cout << "Enter the genre" << endl;
		cin >> InputGenre;

		switch (InputGenre)
		{
		case Action:
			cout << "Choosed genre:Action" << endl;
			break;
		case Comedy:
			cout << "Choosed genre: Comedy " << endl;
			break;
		case Thriller:
			cout << "Choosed genre: Thriller " << endl;
			break;
		case Mystery:
			cout << "Choosed genre:Mystery" << endl;
			break;
		case SiFi:
			cout << "Choosed genre: SiFi " << endl;
			break;
		default:
			cout << "genre not found" << endl;
		}
		break;
	case Hindi:
		cout << "you have choosen Hindi" << endl;
		break;
	case Tamil:
		cout << "you have choosen Tamil" << endl;
		break;
	default:
		cout << "No lang found" << endl;
	}
}


	
