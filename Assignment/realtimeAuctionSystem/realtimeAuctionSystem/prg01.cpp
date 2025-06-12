#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<chrono>
using namespace std;

class user
{
	string name;
	int age;
	string password;
public:
	user(string name, int age,string password) :name(name), age(age) ,password(password){}
	virtual void display() = 0;
	virtual bool checkpassword(string);
	string getname();
	
};


class buyer:public user
{
	int amnt;
public:
	buyer(string name,int age,int amnt,string password):user(name,age,password),amnt(amnt){}

};

class seller :public user
{
	string item;
	int amnt;
public:
	seller(string name,int age,int amnt,string password):user(name,age,password),item(item),amnt(amnt){}
};

class bid
{
	float bidamnt;
	chrono::time_point<chrono::steady_clock>bidTime;
public:
	bid(float bidamnt, chrono::time_point<chrono::steady_clock>bidTime):bidamnt(bidamnt),bidTime(bidTime){}
	float getbidamnt()
	{
		return bidamnt;
	}
	chrono::time_point<chrono::steady_clock>getbidtime()
	{
		return bidTime;
	}

};

class Auction
{

};

class auctionEngine
{

};