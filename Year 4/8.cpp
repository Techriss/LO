#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

const int N = 10;

struct proba {
    int pocz;
    int czas;
};

bool comp(proba a, proba b) {
    return (a.pocz*60 + a.czas < b.pocz*60 + b.czas);
}

// maksymalna liczba prób
int MLP(proba P[]) {
    int lp = 1;
    int ost = 0;

    for (int i = 1; i < N; i++) {
        if (P[i].pocz*60 >= P[ost].pocz*60 + P[ost].czas) {
            lp++;
            ost = i;
        }
    }

    return lp;
}

int main () {
    proba P[N];
    ifstream we("proby.txt");
    for (int i = 0; i < N; i++) {
        we >> P[i].pocz >> P[i].czas;
    }

    we.close();
    sort(P, P+N, comp);

    cout << "maksymalna liczba prób: " << MLP(P) << endl;
}


/*
    prolem plecakowy
    - decyzyjny (każdego jest 1)
    - ogólny (nieograniczona ilość)

    liczymy iloraz = wartosc/waga

*/

struct przedmiot {
    int wart, waga;
};

bool comp(przedmiot a, przedmiot b) {
    return (float(a.wart)/a.waga > float(b.wart)/b.waga);
}


// dziala jak p jest posortowane
int plecak(przedmiot P[], int maxwaga, int K[]) {
    int maxwart = 0;
    for (int i= 0; i < N; i++) {
        K[i] = maxwaga / P[i].waga;
        maxwaga %= P[i].waga;
        maxwart += K[i] * P[i].wart;
    }
}


