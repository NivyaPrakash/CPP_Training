#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> studentMarks;  

    for (int i = 0; i < n; i++) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            string name;
            int marks;
            cin >> name >> marks;
            studentMarks[name] += marks;  
        }
        else if (queryType == 2) {
            string name;
            cin >> name;
            studentMarks.erase(name);  
        }
        else if (queryType == 3) {
            string name;
            cin >> name;
            if (studentMarks.find(name) != studentMarks.end()) {
                cout << studentMarks[name] << endl;  
            }
            else {
                cout << "0" << endl;  
            }
        }
    }

    return 0;
}
