#include <iostream>
#include <list>
#include <string>

using namespace std;


void visit(list<string>& history, list<string>::iterator& current, const string& url) {
    auto eraseFrom = current;
    if (eraseFrom != history.end()) ++eraseFrom;
    history.erase(eraseFrom, history.end());

    history.push_back(url);
    current = prev(history.end());
    cout << *current << endl;
}


void back(list<string>& history, list<string>::iterator& current) {
    if (current != history.begin()) {
        --current;
    }
    cout << *current << endl;
}


void forward(list<string>& history, list<string>::iterator& current) {
    auto next = current;
    ++next;
    if (next != history.end()) {
        current = next;
    }
    cout << *current << endl;
}


int main() {
    list<string> history;
    auto current = history.end();
    string command;

    while (getline(cin, command)) {
        if (command.substr(0, 6) == "visit ") {
            string url = command.substr(6);
            visit(history, current, url);
        }
        else if (command == "back") {
            back(history, current);
        }
        else if (command == "forward") {
            forward(history, current);
        }
    }

    return 0;
}
