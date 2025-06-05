#include <iostream>
#include <iostream>
#include <set>
using namespace std;

set<int> visitors;
void visit(set<int>& visitors, int id) {
    visitors.insert(id);  
}

void showUnique(const set<int>& visitors) {
    cout << visitors.size() << endl;
}

void showTop(const set<int>& visitors) {
    for (int id : visitors) {
        cout << id << " ";
    }
    cout << endl;
}

int main() {
    set<int> visitors;
    string command;

    while (cin >> command) {
        if (command == "VISIT") {
            int id;
            cin >> id;
            visit(visitors, id);
        }
        else if (command == "UNIQUE") {
            showUnique(visitors);
        }
        else if (command == "TOP") {
            showTop(visitors);
        }
        else if (command == "EXIT") {
            break;
        }
    }

    return 0;
}
