#include<iostream>
using namespace std;

class Animal {
public:
	void makeSound() 
	{
		cout << "Animal makes sound!"; 
	}
};

class Cat : public Animal
{
public:
	void makeSound() 
	{
		cout << "Cat meows"<<endl;
	}
};

class Dog : public Animal
{
public:
	void makeSound()
	{
		cout << "Dog barks"<<endl;
	}
};

int main() {
	Dog d;
	Cat c;
	d.makeSound();
	c.makeSound();
	return 0;
}