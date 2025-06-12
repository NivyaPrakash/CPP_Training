#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;


struct PrintJob {
    string username;
    int pages;
};


void processPrintJobs(queue<PrintJob>& jobQueue) {
    while (!jobQueue.empty()) {
        PrintJob job = jobQueue.front();
        jobQueue.pop();

        if (job.pages <= 10) {
            cout << job.username << " " << job.pages << endl;
        }
        else {
            
            cout << job.username << " 10" << endl;
            
            jobQueue.push({ job.username, job.pages - 10 });
        }
    }
}

int main() {
    queue<PrintJob> jobQueue;
    string line;

    /
    while (getline(cin, line)) {
        if (line.empty()) break; 
        stringstream ss(line);
        string username;
        int pages;
        ss >> username >> pages;
        jobQueue.push({ username, pages });
    }

   
    processPrintJobs(jobQueue);

    return 0;
}
