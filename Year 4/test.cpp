#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

string inverse(string s) {
    for (int i = 0; i < s.size()/2; i++)
        swap(s[i], s[s.size()-1-i]);

    return s;
}

string kolumnowy(string s, int k) {
    string c;

    while (s.size() % k != 0) s += 'X';

    for (int j = 0; j < k; j++)
        for (int i = 0; i < s.size()/k; i++)
            c += s[i*k + j];

    return c;
}


string cezar(string s, int k) {
    string c = s;

    for (int i = 0; i < s.size(); i++) {
        c[i] = s[i] + k;
        if (c[i] - 'a' >= 26) c[i] -= 26;
    }

    return c;
}

void cezar_plik(string s, int k) {
    ifstream wejscie(s);
    ofstream wyjscie("szyfr.txt");
    string x;

    while (!wejscie.eof()) {
        getline(wejscie, x);
        wyjscie << cezar(x, k) << endl;
    }

    wejscie.close();
    wyjscie.close();
}










int main() {
    cezar_plik("jawny.txt", 2);
    // cout << cezar("aaaa", 2);
}