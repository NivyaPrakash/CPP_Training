#include<Job.h>
#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

Job::Job() :jobId(0), executionTime(0), priority(0) {}

Job::Job(int i, int e, int p) : jobId(i), executionTime(e), priority(p) {}

void Job::setJobId(int jobId)
{
	this->jobId = jobId;
}

void Job::setExecutionTime(int executionTime)
{
	this->executionTime = executionTime;
}

void Job::setPriority(int priority)
{
	this->priority = priority;
}

int Job::getJobId()
{
	return this->jobId;
}

int Job::getExecutionTime()
{
	return this->executionTime;
}

int Job::getPriority()
{
	return this->priority;
}

void Job::display()
{
	cout << "++++++++++++++++Job Details++++++++++++++++" << endl;
	cout << "Job ID: " << jobId << endl;
	cout << "Execution Time: " << executionTime << endl;
	cout << "Priority: " << priority << endl;
	cout << endl;
}

int Job::executeJob(Logger& ob)
{
	auto start = chrono::system_clock::now();
	this_thread::sleep_for(chrono::milliseconds(executionTime));
	auto end = chrono::system_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
	char msg[100];
	sprintf(msg, "Executing Job ID: %d | Priority: %d | ExecTime %dms", jobId, priority, duration.count());
	ob.log(1, msg);
	return duration.count();
}