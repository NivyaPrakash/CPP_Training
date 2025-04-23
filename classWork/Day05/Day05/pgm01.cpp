#include<iostream>
using namespace std;
/*enum genre {
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



	cout << "Enter the genre" << endl;
	cin >> InputGenre;

	switch (InputGenre)
	{
	case Action:
		cout << "Choosed genre:Action" << endl;
		break;
	case Comedy:
		cout << "Choosed genre: Comedy "<< endl;
		break;
	case Thriller:
		cout << "Choosed genre: Thriller "<< endl;
		break;
	case Mystery:
		cout << "Choosed genre:Mystery" << endl;
		break;
	case SiFi:
		cout << "Choosed genre: SiFi "<< endl;
		break;
	default:
		 cout << "genre not found" << endl;
	}
}*/


/*
enum option {
	Dry=1,
	Wash,
	Soak

};
int main()
{
	int InputOption;
	cout << "1.Dry \n 2.Wash and Dry \n 3.Wash ,Soak,Dry\n" << endl;
	cout << "Enter your option:" << endl;
	cin >> InputOption;
	switch (InputOption)
	{
	case Dry:
		cout << "you choose Dry" << endl;
		break;
	case Wash:
		cout << "1.wash \n 2.dry \n 3.Both \n" << endl;
		int opt;
		cout << "your option" << endl;
		cin >> opt;
		switch (opt)
		{
		case 1:
			cout << "you choose wash" << endl;
			break;
		case 2:
			cout << "you choose Dry" << endl;
			break;
		case 3:
			cout << "you choose wash and dry option" << endl;
			break;
		default:
			cout << "Wrong option" << endl;
		}break;
	case Soak:
		cout << "1.Wash \n 2.Soak \n 3.Dry\n 4.All\n" << endl;
		int optn;
		cout << "Enter your option:" << endl;
		cin >> optn;
		switch (optn) {
		case 1:cout << "you choose wash" << endl;
			break;
		case 2:cout << "you choose soak" << endl;
			break;
		case 3:cout << "you choose Dry" << endl;
			break;
		case 4:cout << "you choose wash soak and dry  option" << endl;
			break;
		default: cout << "Wrong option" << endl;
		}

	}
}
*/







/*
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
*/

/*

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

	(
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
*/



int display();
int main()
{

BEGIN:
	while (true) {
		int ret = display();
		switch (ret)
		{
		case 1:
			cout << "Addition" << endl;
			break;
		case 2:
			cout << "subtraction" << endl;
			break;
		case 3:
			cout << "Multiplication" << endl;
			break;
		case 4:
			cout << "Exiting the application" << endl;
			goto END;
			//flag = "false";
			break;
		default:
			cout << "Wrong choice" << endl;
		}
	}
END:
	cout << "program ended successfully" << endl;
	goto BEGIN;

	return 0;
}

int display()
{
	int ch;
	cout << "press" << endl;
	cout << " 1.Addtion" << endl;;
	cout << "2.subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "0.Exit" << endl;
	cout << "choice";
	cin >> ch;
	return ch;
}
