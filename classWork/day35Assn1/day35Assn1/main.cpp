#include<iostream>
#include<Queue.h>
#include<Logger.h>
#include<stdio.h>
using namespace std;

int menu();

enum logLevels { INFO, DEBUG, WARNING, ERROR };

int main()
{
	int ch = 0;
	int count = 0;
	char msg[20], alg;
	Queue q("jobs.txt");
	Logger jobLogger("job_log.txt");
	while (ch != 5)
	{
		ch = menu();
		switch (ch)
		{
		default:
			cout << "Invalid Choice" << endl;
			break;
		case 1:
			count = q.getJobCount();
			sprintf(msg, "Successfully loaded %d jobs.", count);
			jobLogger.log(INFO, msg);
			break;
		case 2:
			cin >> alg;
			if (alg == 'b')
			{
				q.setPriorityFlag(true);
				jobLogger.log(INFO, "Selected Priority Scheduling.");
			}
			else
			{
				jobLogger.log(INFO, "Selected FIFO Scheduling.");
			}
			break;
		case 3:
			q.executeQueue(jobLogger);
			sprintf(msg, "All jobs executed in %dms", q.getTotalTime());
			jobLogger.log(INFO, msg);
			break;
		case 4:
			jobLogger.log(INFO, "Log saved to job_log.txt.");
			break;
		case 5:
			cout << "Exiting!!!!" << endl;
			exit(0);
			break;
		}
	}
}

int menu()
{
	int choice;
	cout << "==== JobChain Scheduler ====" << endl;
	cout << "1. Load jobs from file" << endl;
	cout << "2. Choose scheduling algorithm" << endl;
	cout << "a.FIFO(Job ID)" << endl;
	cout << "b.Priority - based" << endl;
	cout << "3. Execute jobs" << endl;
	cout << "4. Export log" << endl;
	cout << "5. Exit" << endl;
	cin >> choice;
	return choice;
}