#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


void zlicz(string a, int ile[]) {
    for (int i = 0; i < 26; i++) ile[i] = 0;
    for (int i = 0; i < a.size(); i++) ile[a[i] - 'A']++;
}

bool anagramy2(string s1, string s2) {
    int ile1[26], ile2[26]; zlicz(s1, ile1); zlicz(s2, ile2);
    if (s1.size() != s2.size()) return false;

    for (int i = 0; i < 26; i++)
        if (ile1[i] != ile2[i]) return false;

    return true;
}

bool anagramy3(string s1, string s2, string s3) {
    return anagramy2(s1, s2) && anagramy2(s2, s3);
}

// load from file and check if anagrams
bool anagrams_file() {
    ifstream wejscie("anagramy.txt");
    vector<string> s;
    string x;

    while (!wejscie.eof()) {
        getline(wejscie, x);
        s.push_back(x);
    }

    wejscie.close();
    for (auto w : s) {
        if (!anagramy2(x, w)) return false;
    }

    return true;
}