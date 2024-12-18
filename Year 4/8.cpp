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
// zachlanny - nie dziala
int plecak(przedmiot P[], int maxwaga, int K[]) {
    int maxwart = 0;
    for (int i= 0; i < N; i++) {
        K[i] = maxwaga / P[i].waga;
        maxwaga %= P[i].waga;
        maxwart += K[i] * P[i].wart;
    }

    return maxwart;
}



int plecak_dyn(przedmiot P[], int maxwaga, int K[]) {
    for (int i = 1; i < N; i++) {
        P[0][i] += P[0][i-1];
        P[i][0] += P[i-1][0];
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            P[i][j] = max(P[i-1][j], P[i][i-1]);

    return P[N-1][N-1];
}

int main() {
    przedmiot P[N];
    int K[N];
    ifstream we("doplecaka.txt");

    for (int i = 0; i < N; i++) {
        we >> P[i].wart >> P[i].waga;
    }

    we.close();
    sort(P, P+N, comp);
    cout << plecak(P, 17, K);
}





const int NOMINALY[] = {1, 2, 4, 5};
const int KWOTA = 8;

int reszta_dyn() {
    int ilem[KWOTA + 1];
    ilem[0] = 0;
    for (int i = 1; i < KWOTA; i++) ilem[i] = KWOTA + 1;
    for (int i = 1; i < KWOTA; i++) {
        for (int j = 0; j < N; j++) {}
        if (NOMINALY[j] <= i) {
            if (ilem[i - NOMINALY[j]] + 1 < ilem[i]) {
                ilem[i] = ilem[i - NOMINALY[j]] + 1;
            }
        }
    }

    return ilem[KWOTA];
}


int reszta_dyn2(int reszta[]) {
    int ilem[KWOTA + 1];
    int resztam[KWOTA + 1][N];
    
    ilem[0] = 0;
    for (int i = 1; i < KWOTA; i++) ilem[i] = kwota + 1;
    for (int i = 0; i < N; i++) R[0][i] = 0;
    for (int i = 1; i < KWOTA; i++) {
        for (int j = 0; j < N; j++) {
            if (NOMINALY[j] <= i) {
                if (ilem[i - NOMINALY[j]] + 1 < ilem[i]) {
                    ilem[i] = ilem[i - NOMINALY[j]] + 1;
                    for (int k = 0; k < N; k++) resztam[i][k] = resztam[i - NOMINALY[j]][k];
                    resztam[i][j]++;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) reszta[]

}
 