#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<map>
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

	bool checkPassword(std::string p)
	{
		return this->password == p;
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
		CDR c;
		cout << " Operator Brand: " << brandname << "(" << MSISDN << ")" << endl;
		cout << "Incoming voice call durations :"<<c.d ;
		cout << "Outgoing voice call durations :"<<c.d;
		cout << "Incoming SMS messages : ";
		cout << "Outgoing SMS messages : ";
		cout << "MB downloaded : | MB uploaded :";
	}
};


class CDR
{
	vector<string>words;
public:
	vector < string> split(const string& line, char del)
	{
		string word;
		for (char ch : line)
		{
			if (ch == del)
			{
				words.push_back(word);
				word.clear();
			}
			else {
				word += ch;
			}

		}words.push_back(word);
		return words;
	}
	void readfile(const string filename)
	{
		ifstream file("data.cdr");
		string line;
		if (!file.is_open())
			cout << "file cannot be openend";
		while (getline(file, line))
			words = split(line, '|');
		for (auto i = 0;i <= words.size();i++)
		{
			cout<<"words" << i + 1 << ":" << words[i];
		}
		file.close();
	}
};


int main()
{
	int login()
	{
		int ch;
		cout << "Login Screen" << std::endl;
		cout << "1. SignUp" << std::endl;
		cout << "2. Login" << std::endl;
		cout << "3. Exit" << std::endl;
		cout << "Choice: ";
		cin >> ch;
		cout << std::endl;
	}
	int menu() {
		cout << "Main Menu" << endl;
		cout << "CDR FILE" << endl;
		cout << "Billing information" << endl;
		cout << "Logout" << endl;
	}
	int menusub()
	{
		cout << "sub menu" << endl;
		cout << "customer billing" << endl;
		cout << "operator billing" << endl;
		cout << "choice" << endl;
		cin >> choice;
	}
	CDR c;
	int choice1, choice2, choice3;
	while (login())
	{

	}

		




		
	

}






