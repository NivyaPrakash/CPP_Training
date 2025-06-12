#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Task {
    string description;
    int priority;
};
bool compareTasks(const Task& a, const Task& b) {
    return a.priority > b.priority;
}

int main() {
    vector<Task> tasks;
    string line;

    /
    while (getline(cin, line)) {
        if (line.empty()) break;
        size_t last_space = line.find_last_of(' ');
        if (last_space == string::npos) continue;

        string desc = line.substr(0, last_space);
        int prio = stoi(line.substr(last_space + 1));
        tasks.push_back({ desc, prio });
    }

    sort(tasks.begin(), tasks.end(), compareTasks);

    /
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        cout << it->description << endl;
    }

    return 0;
}
