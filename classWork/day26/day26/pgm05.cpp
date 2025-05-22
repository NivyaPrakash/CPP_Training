#include<iostream>
using namespace std;

class movieDet
{
private:
	char title[20];
	char genre[20];
	float rating;
public:
	void setTitle(char*);
	char* getTitle();
	void setgenre(char*);
	char* getgenre();
	void setrating(int);
	int getrating();
	void getdetails();
	void printrating();
	void display();
};

void movieDet :: setTitle(char* s)
{
	strcpy(title, s);
}
char* movieDet::getTitle() {
	return title;
}
void movieDet::setgenre(char* g)
{
	strcpy(genre, g);
}
char* movieDet::getgenre()
{
	return genre;
}
void movieDet::setrating(int r)
{
	rating = r;
}
int movieDet::getrating()
{
	return rating;
}


void movieDet::getdetails()
{
	cout << "Enter the movie name:" << endl;
	cin.getline(title, 20);
	cout << "Enter the genre:" << endl;
	cin.getline(genre, 20);
	cout << "Enter the rating:" << endl;
	cin >> rating;
}

void movieDet:: printrating()
{
	if (rating >= 8)
		cout << "Movie Hit" << endl;
	else if (rating >= 4 && rating <= 8)
		cout << "movie Average";
	else
		cout << "Movie Flop" << endl;
}

void movieDet::display()
{
	cout << "Movie Title:" << title<<endl;
	cout << "Movie genre:" << genre<<endl;
	cout << "Movie rating:" << rating<<endl;
	cout << "Movie review:" ;
	printrating();
}




int main()
{
	movieDet m;
	m.getdetails();
	m.display();
}