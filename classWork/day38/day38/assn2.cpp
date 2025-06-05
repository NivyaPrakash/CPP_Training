#include <iostream>
#include <sstream>
#include <set>
#include <string>
using namespace std;
multiset<string> words;
void addWords(const string& text) {
    string word = "";
    for (char ch : text) {
        if (ch != ' ') {
            word += ch;
        }
        else {
            if (!word.empty()) {
                words.insert(word);
                word = "";          
            }
        }
    }
    if (!word.empty()) {
        words.insert(word);
    }
}


void countWord(const string& word) {
    cout << "Count of '" << word << "': " << words.count(word) << endl;
}

void display() {
    cout << "Sorted Words:"<<endl;
    for (auto w : words) {
        cout << w << " ";
    }
    cout << endl;
}

int main()
{
    string text = "hello world hello code hello learn world code";
    addWords(text);
    display();
    countWord("hello");
    countWord("code");
}