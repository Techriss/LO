#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const std::string alfabet = "aąbcćdeęfghijklłmnńoóprsśtuwyzźż";
const std::string betabet = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUWYZŹŻ";

std::string cezar(std::string s, int klucz) {
    std::string szyfrogram = s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'a' || s[i] > 'z') continue;
        szyfrogram[i] = s[i] + klucz;
        if (szyfrogram[i] - 'a' >= 26) szyfrogram[i] -= 26;
    }

    return szyfrogram;
}

char cezarpl(char znak, int klucz) {
    int i = alfabet.find(znak);
    if (i >= 0 && i < 35) {
        i = (i+klucz)%35;
        return alfabet[i];
    }

    i = betabet.find(znak);
    if (i >= 0 && i < 35) {
        i = (i+klucz)%35;
        return betabet[i];
    }

    return znak;
}

std::string cezar_pl(std::string s, int klucz) {
    std::string szyfrogram;
    for (auto c : s)
        szyfrogram += cezarpl(c, klucz);

    return szyfrogram;
}


int main() {
    ifstream wejscie("tekstjawny.txt");
    ofstream wyjscie("szyfrogram.txt");

    std::string s;
    int klucz;

    cout << "klucz: ";
    cin >> klucz;

    while (!wejscie.eof()) {
        getline(wejscie, s);
        wyjscie << cezar(s, klucz) << endl;
    }

    wyjscie.close();
    wejscie.close();

    cout << "plik szyfrogram.txt został utworzony" << endl;
}