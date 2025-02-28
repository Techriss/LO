#include <iostream>
#include <string>
#include <stack>
using namespace std;

string onp(string w) {
    stack<char> s;
    s.push('#');
    string onp = "";

    for (auto &c : w) {
        if (c == '(') {
            s.push('(');
        }
        else if (c == ')') {
            while (s.top() != '(') {
                onp += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (c == '+' || c == '-') {
            while (s.top() != '#' && s.top() != '(') {
                onp += s.top(); 
                s.pop();
            }
            s.push(c);
        }
        else if (c == '*' || c == '/' || c == '%') {
            if (s.top() == '*' || s.top() == '/' || s.top() == '%') {
                onp += s.top();
                s.pop();
            }
            s.push(c);
        }
        else {
            onp += c;
        }
    }

    while (s.top() != '#') {
        onp += s.top();
        s.pop();
    }

    s.pop();
    return onp;
}



int main() {
    string x;
    cin >> x;
    cout << onp(x) << endl;
}