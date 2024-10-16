#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

const std::string alfabet_m = "aąbcćdeęfghijklłmnńoóprsśtuwyzźż";
const std::string alfabet_w = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUWYZŹŻ";

std::string cezar(std::string s, int klucz) {
    std::string szyfrogram = s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'a' || s[i] > 'z') continue;
        szyfrogram[i] = s[i] + klucz;
        if (szyfrogram[i] - 'a' >= 26) szyfrogram[i] -= 26;
    }

    return szyfrogram;
}


int znajdzklucz() {
    int liczniki[35];
    for (int i = 0; i < 35; i++) liczniki[i] = 0;
    string s;
    ifstream wejscie("tajne.txt");

    while (!wejscie.eof()) {
        getline(wejscie, s);
        for (int i = 0; i < s.size(); i++) {
            int j = alfabet_m.find(s[i]);
            if (j >= 0 && j < 35) liczniki[j]++;
            else {
                int j = alfabet_w.find(s[i]);
            }
        }
    }

    wejscie.close();
    int klucz = 0;
    for (int i = 1; i < 35; i++) {
        if (liczniki[i] > liczniki[klucz]) klucz = i;
    }

    return klucz;

}


void szyfruj(int klucz) {
    string s;
    ifstream wejscie("tajne.txt");
    ofstream wyjscie("odszyfrowany.txt");

    while (!wejscie.eof()) {
        getline(wejscie, s);
        wyjscie << cezar(s, klucz) << endl;
    }

    wyjscie.close();
    wejscie.close();
}


int main() {
    szyfruj(35-znajdzklucz());
    cout << "plik odszyfrowany zostal utworzony" << endl;
}


string przestaw2(string tj, string kl) {
    string szyfrogram = "";
    int i, j;

    while (tj.size() % kl.size() != 0) tj += 'x';
    for (j = 0; j < kl.size(); j++) {
        for (i = 0; i < tj.size()/kl.size(); i++)
            szyfrogram += tj[i*kl.size() + kl[j] - '0'];
    }

    return szyfrogram;
}


// 1 sposob
bool anagram(string s1, string s2) {
    sort(s1.begin(), s1.end()); sort(s2.begin(), s2.end());
    return s1 == s2;
}

// 2 sposob 
// policzyc litery