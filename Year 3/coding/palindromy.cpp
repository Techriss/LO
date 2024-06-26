#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;


bool isPalindrome(string s) {
    for (int i = 0, j = s.size()-1; i < j; i++, j--)
        if (s[i] != s[j]) return false;

    return true;
}


bool isPalindrome_caseinsensivite(string s) {
    for (int i = 0, j = s.size()-1; i < j; i++, j--)
        if (tolower(s[i]) != tolower(s[j])) return false;

    return true;
}



// wypisac ze zdania wyrazy ktore sa palindromami
// wziac getlinem
vector<string> findpalindromes(string s) {
    int l = 0, r = 0;
    vector<string> v;

    while (r < s.size()) {
        l = r + 1;
        while (r < s.size() && s[r] != ' ') ++r;
        if (r == s.size()) r = s.size()-1;

        string p = s.substr(l, r);
        if (isPalindrome_caseinsensivite(p)) v.push_back(p);
    }

    return v;
}

void findps(string s) {
    int i;
    while (s.size() > 0) {
        i = s.find(' ');
        if (i > 0) {
            string x = s.substr(0, i);
            if  (isPalindrome(x)) cout << x << endl;
        }

        s.erase(0, i+1);
    }
}

bool isPalindrome_sentence(string s) {
    for (int i = 0, j = s.size()-1; i < j; i++, j--) {
        while (toupper(s[i]) < 'A' || toupper(s[i]) > 'Z') ++i;
        while (toupper(s[j]) < 'A' || toupper(s[j]) > 'Z') --j;
        if (i > j || s[i] != s[j]) return false;
    }

    return true;
}



void threedigitps() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            cout << i << j << i << endl;
        }
    }
}


string upstring(string s) {
    string x = s;

    for (int i = 0; i < s.size(); i++) 
        x[i] = toupper(s[i]);

    return x;
}

string upstring(string s) {
    for (auto &c : s) {
        c = toupper(c);
    }

    return s;
}


void psab(int a, int b) {
    for (int i = a; i <= b; ++i) {
        auto x = to_string(i);
        if (isPalindrome(x)) cout << x;
    }
}



int main() {
    cout << upstring("ala ma Kota");
}