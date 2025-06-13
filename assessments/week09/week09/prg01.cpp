#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
enum loglevels { INFO, DEBUG, WARNING, ERROR };
class logger
{
	ofstream logfile;
	
public:
	logger(const char* filename)
	{
		logfile.open(filename, ios::app);
		try
		{
			if (!logfile.is_open())
				throw "ERROR:file cannot be openend";

		}
		catch (string s)
		{
			cout << s;
			exit(0);
		}

	}
	
	const char* leveltostring(int level)
	{

		
			switch (level)
			{
			case INFO:
				return "INFO";
				break;
			case DEBUG:
				return "DEBUG";
				break;
			case WARNING:
				return "WARNING";
				break;
			case ERROR:
				return "ERROR";
				break;
			default:
				return "UNKNOWN";
				break;
			}
		
	}
		void log(int level, const char* message)
		{
			logfile << "[" << leveltostring(level) << "]" << message << endl;
		}
	
	
};






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
	void incomingmsg()
	{
		bool isoperators = true;
		if (isoperators)
		{
			sameSMSMO++;
		}
		diffSMSMO++;

	}
	void outgoingmsg()
	{
		bool isoperators = true;
		if (isoperators)
		{
			sameSMSMT++;
		}
		diffSMSMT++;

	}
	
	void customerbilling()
	{

	}
	void download(int mb)
	{
		download = download + mb;
	}
	void upload(int mb)
	{
		upload = upload + mb;
	}
};


class operators
{
	string MSISDN;
	string brandname;
	int MMC;
	int MNC;
	vector<int>MOC;
	vector<int>MTC;
	int SMSMO;
	int SMSMT;
	int download;
	int upload;
public:
	operators(std::string, std::string);
	void incomingCall(int d)
	{
		MOC.emplace_back(d);
	}
	void outgoingCall(int d)
	{
		MTC.emplace_back(d);
	}
	void smsReceived()
	{
		SMSMO++;
	}
	void smsSent()
	{
		SMSMT++;
	}
	void download(int mb)
	{
		download = download + mb;
	}
	void upload(int mb)
	{
		download = download + mb;
	}
	void operatorBilling()
	{

	}
};


