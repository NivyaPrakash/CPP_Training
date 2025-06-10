#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
public:
    virtual void getdata() = 0;  // Pure virtual function for getting data
    virtual void putdata() = 0;  // Pure virtual function for displaying data
    static int count;  // Static variable to keep track of ID

    Person() {
        count++;  // Increment ID whenever a new object is created
    }
};

int Person::count = 0;  // Initialize the static variable

// Derived class Professor
class Professor : public Person {
private:
    int publications;
public:
    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << Person::count << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int marks[6];
public:
    void getdata() override {
        cin >> name >> age;
        for (int i = 0
