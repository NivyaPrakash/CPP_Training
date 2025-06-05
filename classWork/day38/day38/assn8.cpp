#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
forward_list<string>& messages;
void clean(forward_list<string>& messages) {
    messages.remove_if([](const string& msg) {
        return msg.find("DELETED:") == 0;
        });
}

void print(const forward_list<string>& messages) {
    for (const auto& msg : messages)
        cout << msg << endl;
}

int main() {
    forward_list<string> messages = {
        "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse"
    };

    clean(messages);
    print(messages);

    return 0;
}
