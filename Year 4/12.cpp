#include <iostream>
#include <fstream>
#include <queue>
#include <list>
#include <string>

using namespace std;
const string alfabet = "aąbcćdeęfghijklłmnńoópqrsśtuvwxyzźż";
const int N = 35;

void budujliste(list<string> &lista, int &mdl) {
    ifstream we("słowa.txt");
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

void sortujslowa(list<string> &lista, int mdl) {
    queue<string> kubelki[N];
    list<string>::iterator it;
    int i, j;
    string s;

    for (i = mdl - 1; i >= 0; i--) {
        it = lista.begin();
        while (it != lista.end()) {
            s = *it;
            if (s.size() > i) {
                it = lista.erase(it);
                j = alfabet.find(s[i]);
                kubelki[j].push(s);
            }
            else it++;
        }

        for (j = 0; j < N; j++) {
            while (!kubelki[j].empty())
            lista.push_back(kubelki[j].front());
            kubelki[j].pop();
        }
    }
}
