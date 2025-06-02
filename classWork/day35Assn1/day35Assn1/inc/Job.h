#pragma once
#include<Logger.h>
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