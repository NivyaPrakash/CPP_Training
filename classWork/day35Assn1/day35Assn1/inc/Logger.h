#pragma once
#include<fstream>
#include<string>
using namespace std;
using namespace std;
class Logger
{
	ofstream logFile;
	const char* levelToString(int);
public:
	Logger(const char*);
	void log(int, const char*);
};