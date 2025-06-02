#pragma once
#include<vector>
#include<Job.h>
#include<Logger.h>
using namespace std;
class Queue
{
private:
	vector<Job> jobQueue;
	static int totalTime;
	bool isPriority;
	void sortPriority();
public:
	Queue(const char*);
	void executeQueue(Logger&);
	static int getTotalTime();
	int getJobCount();
	void setPriorityFlag(bool);
};
