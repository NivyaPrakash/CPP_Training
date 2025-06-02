#include<iostream>
#include<string>
using namespace std;
#include<Logger.h>

enum logLevels { INFO, DEBUG, WARNING, ERROR };

Logger::Logger(const char* filename)
{
	logFile.open(filename, ios::app);
	try
	{
		if (!logFile.is_open())
			throw "Log File Cannot be opened";
	}
	catch (string s)
	{
		cout << s << endl;
		exit(0);
	}
	log(INFO, "JobChain Execution Log");
	logFile << "----------------------------------------" << endl;
}

const char* Logger::levelToString(int level)
{
	switch (level)
	{
	default:
		return "UNKNOWN";
		break;
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
	}
}

void Logger::log(int level, const char* message)
{
	logFile << "[" << levelToString(level) << "] " << message << endl;
}