#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false; 
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false; 
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid Parenthesis" << endl;
    }
    else {
        cout << "Invalid Parenthesis" << endl;
    }
    
    return 0;
}
