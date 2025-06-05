#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

set<int> visitors;

void visit(int user_id) {
    visitors.insert(user_id);
}

void printUnique() {
    cout << visitors.size() << endl;
}

void printTop() {
    for (int id : visitors) {
        cout << id << " ";
    }
    cout << endl;
}

int main() {
   
    visit(101);
    visit(105);
    visit(101);
    visit(110);

    printUnique();
    printTop();    

    return 0;
}
