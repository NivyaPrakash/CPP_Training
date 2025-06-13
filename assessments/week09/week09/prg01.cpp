#include<iostream>
#include<string>
#include<vector>
using namespace std;


class user
{
	string name;
	string username;
	string password;

public:
	user(string name, string username, string password) :name(name), username(username), password(password) {}
	string getname()
	{
		return name;
	}
	string getusername()
	{
		return username;
	}
};


class customer
{
	string MSISDN;
	string opbrandname;
	int MMC;
	int MNC;
	vector<int>sameMTC;
	vector<int>diffMTC;
	vector<int>sameMOC;
	vector<int>diffMOC;
	int sameSMSMO;
	int diffSMSMO;
	int sameSMSMT;
	int diffSMSMT;
	int download;
	int upload;
public:
	customer(string msisdn, string brandname, int mmc, int mnc) :MSISDN(msisdn), opbrandname(brandname), MMC(mmc), MNC(mnc) {}
	string getMSISDN()
	{
		return MSISDN;
	}
	string getopbrandname()
	{
		return opbrandname;
	}
	void incomingcall(int d)
	{
		bool isoperators = true;
		if (isoperators)
		{
			sameMTC.emplace_back(d);
		}
		else
		{
			diffMTC.emplace_back(d);
		}

	}

	void outgoingcall(int d)
	{
		bool isoperators = true;
		if (isoperators)
		{
			sameMOC.emplace_back(d);
		}
		else
		{
			diffMOC.emplace_back(d);
		}
	}
	void incomingmsg(int inmsg)
	{
		bool isoperators = true;
		if (isoperators)
		{
			inmsg++;
		}
	}
	void outgoingmsg();
	void customerbilling();
	void download();
	void upload();
};


class operators
{
	string MSISDN;
	string brandname;
	int MMC;
	int MNC;
	vector<int>sameMOC;
	vector<int>diffMTC;
	int SMSMO;
	int GPRS;
public:

};