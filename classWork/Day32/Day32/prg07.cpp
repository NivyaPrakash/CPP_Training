#include<iostream>
using namespace std;
class Animal
{
public:
	void eat() { cout << "Eat"; }
	void walk() { cout << "Walk"; }
	void makesound() { cout << "makesound"; }
	virtual void soundLike() { cout << "Animal sound"; }

};

class cat :public Animal
{
public:
	void dispCat() { cout << "Cat"; }
	void soundLike() { cout << "Meow"; }
};

class dog :public Animal
{
public:
	void dispdog() { cout << "Dog"; }
	void soundLike() { cout << "bow"; }
};

int main()
{
	cat c;
	c.dispCat();
	cout <<"\t" << "can" << "\t";
	c.eat();
	cout << "\t" << "and can" << "\t";
	c.walk();
	cout << "\t" << "and also" << "\t";
	c.makesound();
	cout << "\t" << "like"<<'\t';
	c.soundLike();

	cout << endl;
	cout << "============================================="<<endl;
	dog d;

	d.dispdog();
	cout << "\t" << "can" << "\t";
	d.eat();
	cout << "\t" << "and can" << "\t";
	d.walk();
	cout << "\t" << "and also" << "\t";
	d.makesound();
	cout << "\t" << "like" << '\t';
	d.soundLike();

	cout << endl;

	Animal* bcptr;
	bcptr = &c;
	bcptr->eat();
	bcptr->walk();
	bcptr->makesound();
	bcptr->soundLike();
	cout << "\n==============================\n\n";



	bcptr = &d;
	bcptr->eat();
	bcptr->walk();
	bcptr->makesound();
	bcptr->soundLike();
	cout << "\n==============================\n\n";
}