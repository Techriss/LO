#include <iostream>
#include <fstream>
#include <queue>
#include <list>
#include <string>

using namespace std;
// const string alfabet = "aąbcćdeęfghijklłmnńoópqrsśtuvwxyzźż";
const string alfabet = "abcdefghijklmnopqrstuvwxyz";
const int N = 26;

void budujliste(list<string> &lista, int &mdl) {
    ifstream we("slowa.txt");
    string s;
    mdl = 0;
    while (we >> s) {
        lista.push_back(s);
        if (s.size() > mdl) mdl = s.size();
    }

    we.close();
}

void zapiszliste(list<string> &lista) {
    ofstream wy("wyjscie.txt");
    list<string>::iterator it;
    for (it = lista.begin(); it != lista.end(); it++) {
        wy << *it << endl;
    }

    wy.close();
}

void print(list<string> &lista) {
    for (auto it = lista.begin(); it != lista.end(); it++) {
        cout << *it << endl;
    }
}

void sortujslowa(list<string> &lista, int mdl) {
    queue<string> kubelki[N];
    list<string>::iterator it;
    string s;

    for (int i = mdl - 1; i >= 0; i--) {
        it = lista.begin();
        while (it != lista.end()) {
            s = *it;
            if (s.size() > i) {
                it = lista.erase(it);
                int j = alfabet.find(s[i]);
                kubelki[j].push(s);
            }
            else it++;
        }

        for (int j = 0; j < N; j++) {
            while (!kubelki[j].empty()) {
                lista.push_back(kubelki[j].front());
                kubelki[j].pop();
            }
        }
    }
}



int main() {
    list<string> lista;
    int mdl;
    budujliste(lista, mdl);
    sortujslowa(lista, mdl);
    print(lista);
    // zapiszliste(lista);
}