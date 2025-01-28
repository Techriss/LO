#include <iostream>
#include <string>
#include <stack>

using namespace std;

string onp(string w) {
    stack<char> stos;
    stos.push('#');
    string onp = "";

    for (int i = 0; i < w.size(); i++) {
        if (w[i] == '(') {
            stos.push(')');
            continue;
        }
        if (w[i] == ')') {
            while (stos.top() != '(') {
                onp += stos.top();
                stos.pop();
            }
            stos.pop();
            continue;
        }
        if (w[i] == '+' || w[i] == '-') {
            while (stos.top() != '#' && stos.top() != '(') {
                onp += stos.top(); 
                stos.pop();
            }
            stos.push(w[i]);
            continue;
        }
        if (w[i] == '*' || w[i] == '/') {
            if (stos.top() == '*' || stos.top() == '/') {
                onp += stos.top();
                stos.pop();
            }
            stos.push(w[i]);
        }
        else {
            onp += w[i];
        }
    }

    while (stos.top() != '#') {
        onp += stos.top();
        stos.pop();
    }

    stos.pop();
    return onp;
}

int oblicz(string &onp) {
    char znak = onp[onp.size()-1];
    onp.erase(onp.size()-1, 1);
    if (znak >= '0' && znak <= '9') {
        return znak - '0';
    }
    else {
        int arg1 = oblicz(onp);
        int arg2 = oblicz(onp);
        switch (znak) {
            case '+':
                return arg1 + arg2;
            case '-':
                return arg1 - arg2;
            case '*':
                return arg1 * arg2;
            case '/':
                return arg1 / arg2;
        }
    }
}


int main() {
    string w;
    cout << "podaj wyrazenie algebraiczne: ";
    cin >> w;
    cout << "odwrotna notacja polska: " << onp(w);
}
