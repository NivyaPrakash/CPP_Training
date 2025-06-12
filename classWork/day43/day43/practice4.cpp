#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string& expr) {
    stack<char> st;

    // Use iterator to traverse the string
    for (auto it = expr.begin(); it != expr.end(); ++it) {
        char ch = *it;

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
        // Ignore other characters if any
    }
    return st.empty();
}

int main() {
    string expr;
    getline(cin, expr);

    if (isBalanced(expr)) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not Balanced" << endl;
    }

    return 0;
}
