#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<chrono>
#include<vector>
#include<unordered_map>
#include<map>
#include<queue>
using namespace std;

class user
{
protected:
	string name;
	string username;
	string password;
public:
	user(string name,string password,string username) :name(name), username(username), password(password) {}
	virtual void display() = 0;
	virtual bool checkpassword(string);
	string getname();
	
};


class buyer:public user
{
	unordered_map<string, bid>buyerbids;
public:
	buyer(string name,string username,string password):user(name,username,password){}
	void addbid(string item, float amnt)
	{
		bid b(amnt, chrono::system_clock::now());
		buyerbids.insert({ item, b});
	}
	void display()
	{
		cout << "Name:" << name<<endl;
		cout << "UserName:" << username << endl;
		for (auto & p : buyerbids)
		{
			cout << p.first << endl;
			cout << p.second.getbidamnt() << endl;
			time_t t= chrono::system_clock::to_time_t((p.second).getbidtime());
			cout << ctime(&t) << endl;
		}

	}
};

class seller :public user
{
	vector<string>items;
	map<string, vector<bid>>itembids;
	unordered_map<string, auction>itemauctions;
public:
	seller(string name,string useranme,string password):user(name,username,password){}
};

class bid
{
	float bidamnt;
	chrono::time_point<chrono::system_clock>bidTime;
public:
	bid(float bidamnt, chrono::time_point<chrono::system_clock>bidTime):bidamnt(bidamnt),bidTime(bidTime){}
	float getbidamnt()
	{
		return bidamnt;
	}
	chrono::time_point<chrono::system_clock>getbidtime()
	{
		return bidTime;
	}

};

class auction
{
	string itemname;
	float minamnt;
	priority_queue<bid>itembids;
	bool isActive;
	condition_variable cv;
	void biddingtime();
public:
	auction(string n,float m):itemname(n),minamnt(m){}
	friend bool operator<(bid&, bid&);
	void takebid(buyer&, float);
	void resultdeclaration();

};

class auctionEngine
{

};