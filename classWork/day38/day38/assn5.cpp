#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

set<string> bannedWords;

void addBannedWords(const set<string>& banned) {
    bannedWords = banned;
}

void filterText(const string& text) {
    stringstream ss(text);
    string word;
    bool first = true;
    cout << "Filtered: ";
    while (ss >> word) {
        if (bannedWords.find(word) == bannedWords.end()) {
            if (!first) cout << " ";
            cout << word;
            first = false;
        }
    }
    cout << endl;
}

int main() {
    
    set<string> banned = { "bad", "evil", "vulgar" };
    addBannedWords(banned);

   
    string text = "this is a bad example with evil words";

   
    filterText(text);

    return 0;
}
