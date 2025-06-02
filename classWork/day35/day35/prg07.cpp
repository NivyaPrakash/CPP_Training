#include<iostream>
#include<chrono>
#include<thread>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
class Job {
    int jobID;
    int executionTime;
    int priority;
public:
    int getjobID();
    void setJobID(int);
    void setexecutionTime(int);
    int getexecutionTime();
    int getPriority();
    void setPriority(int);
    void display();
    int executeJob();

};

class queues
{
private:
    vector<Job>jobqueue;
    int totaltime;
public:
    queues(const char*);
    void sortPriority();
    void executeQueue();
    void getTotal();
};


queues::queues(const char* filename)
{
    Job ob;
    ifstream file;
    file.open(filename, ios::in);
    while (file.read((char*)&ob, sizeof(ob)))
    {
        jobqueue.push_back(ob);
    }
    file.close();
}


struct Compare {
    bool operator()(Job obj1, Job obj2) {
        return obj1.getPriority() > obj2.getPriority(); // Descending
    }
};


void queues::sortPriority()
{
    sort(jobqueue.begin(), jobqueue.end(), Compare());
}

void queues::executeQueue()
{
    for (auto i:jobqueue)
    {
        totaltime += i.executeJob();
    }
}


void getTotal()
{

}









void Job :: setJobID(int id)
{
    jobID = id;
}

int Job :: getjobID()
{
    return jobID;
}

void Job :: setexecutionTime(int time)
{
    executionTime = time;
}

int Job::getexecutionTime()
{
    return  executionTime;
}

void Job::setPriority(int prio)
{
    priority = prio;
}

int Job::getPriority()
{
    return  priority;
}

void Job:: display()
{


    cout << "===============JOB DETAILS=========================" << endl;
    cout << "JobID:" << jobID << endl;
    cout << "executionTime" << executionTime << endl;
    cout << "Priority:" << priority << endl;
    cout << endl;


}


int Job::executeJob()
{
    auto start = chrono::system_clock::now();
    this_thread::sleep_for(chrono::milliseconds(executionTime));
    auto end = chrono::system_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    return duration.count();
}


