#include<iostream>
using namespace std;

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







