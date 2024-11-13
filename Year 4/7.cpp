#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 5;

void losuj(bool A[][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = rand() % 2;
    
    if (rand() % 2 == 1) {
        int idol = rand() % N;
        for (int i = 0; i < N; i++) A[i][idol] = true;
        for (int i = 0; i < N; i++) A[idol][i] = false;
    }
}

int szukajidola(bool A[][N]) {
    int cand = 0;
    bool ifcand = false;

    while (cand < N && !ifcand) {
        int i = 0; 
        A[cand][cand] = false;
        while (i < N && !A[cand][i]) i++;
        if (i == N) ifcand = true;
        else cand++;
    }

    if (!ifcand) return -1;
    int i = 0; A[cand][cand] = true;
    while (i < N && A[i][cand]) i++;
    if (i == N) return cand;
    else return -1;
}

int szukajidola(bool A[][N]) {
    int cand = 0, i = 1;
    while (i < N) {
        if (A[cand][i]) cand = i;
        i++;
    }

    i = 0; A[cand][cand] = false;
    while (i < N && !A[cand][i]) i++;
    if (i < N) return -1;
    i = 0; A[cand][cand] = true;
     
}

void wypisz() {
    for (int i = 0; i < )
}