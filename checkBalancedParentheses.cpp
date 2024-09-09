#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(const string& s) {
    stack<char> stk;
    for (char ch : s) {
        switch (ch) {
            case '(':
            case '{':
            case '[':
                stk.push(ch);
                break;
            case ')':
                if (stk.empty() || stk.top() != '(') {
                    return false;
                }
                stk.pop();
                break;
            case '}':
                if (stk.empty() || stk.top() != '{') {
                    return false;
                }
                stk.pop();
                break;
            case ']':
                if (stk.empty() || stk.top() != '[') {
                    return false;
                }
                stk.pop();
                break;
            default:
                return false;
        }
    }
    return stk.empty();
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    bool result = isValid(input);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
