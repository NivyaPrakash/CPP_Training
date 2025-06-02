#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<chrono>
#include<thread>
#include<algorithm>
#include<cstring>
#include<stdio.h>
using namespace std;

class Job {
private:
    int jobId;
    int executionTime;
    int priority;
public:
    Job();
    Job(int, int, int);
    void setJobId(int);
    void setExecutionTime(int);
    void setPriority(int);
    int getJobId();
    int getExecutionTime();
    int getPriority();
    void display();
    int executeJob(Logger&);
};


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


class Logger
{
    ofstream logFile;
    const char* levelToString(int);
public:
    Logger(const char*);
    void log(int, const char*);
};


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

int Queue::totalTime = 0;

struct Compare
{
    bool operator()(Job ob1, Job ob2) const
    {
        return ob1.getPriority() > ob2.getPriority();
    }
};

Queue::Queue(const char* filename)
{
    Job ob;
    int val;
    ifstream file;
    try
    {
        file.open(filename, ios::in);
        if (!file.is_open())
            throw "File cannot be opened";
    }
    catch (string s)
    {
        cout << s << endl;
        exit(0);
    }
    while (!file.eof())
    {
        file >> val;
        ob.setJobId(val);
        file >> val;
        ob.setExecutionTime(val);
        file >> val;
        ob.setPriority(val);
        jobQueue.push_back(ob);
    }
    file.close();
    totalTime = 0;
    isPriority = false;
}

void Queue::sortPriority()
{
    sort(jobQueue.begin(), jobQueue.end(), Compare());
}

void Queue::executeQueue(Logger& ob)
{
    if (isPriority)
        sortPriority();
    for (auto i : jobQueue)
    {
        totalTime += i.executeJob(ob);
    }
}

int Queue::getTotalTime()
{
    return totalTime;
}

int Queue::getJobCount()
{
    return jobQueue.size();
}

void Queue::setPriorityFlag(bool flag)
{
    this->isPriority = flag;
}

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


int menu();

enum logLevels { INFO=0, DEBUG, WARNING, ERROR };

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