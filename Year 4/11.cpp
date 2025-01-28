#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <queue>

using namespace std;


// kolejka (fifo)
/*
    push()
    pop()
    empty()
    front()
*/


/*
    labiynt kolejką

    iteracja | miejsce | miejsce kolejne
    -          (1, 14)   (1, 14)
    1          (1,14)    (2, 14), (1, 13), (1, 15)
    2          (2, 14)   (1, 13), (1, 15), (3, 14)
    3          (1, 13)   (1, 15), (3, 14), (1, 12)
    4          ...

*/


struct pole {
    int w, k;
};

const int N = 100;



void wczytaj(int Lab[][N]) {
    string s;
    ifstream we("labirynt.txt");
}


bool droga(int Lab[][N], pole p1, pole &p2) {
    int w, k;
    bool wyjscie = false;

    queue<pole> q;
    q.push(p1);
    Lab[p1.w][p1.k] = 1;

    while (!wyjscie && !q.empty()) {
        p2 = q.front();
        q.pop();
        w = p2.w;
        k = p2.k;
        
        if (w == 0 || w == N-1 || k == 0 || k == N-1)
            wyjscie = true;
        else {
            if (Lab[w-1][k] == 0) {
                Lab[w-1][k] = Lab[w][k] + 1;
                p2.w = w-1;
                p2.k = k;

                q.push(p2);
            }
            else if (Lab[w+1][k] == 0) {
                Lab[w+1][k] = Lab[w][k] + 1;
                p2.w = w;
                p2.k = k+1;

                q.push(p2);
            }
            else if (Lab[w][k-1] == 0) {
                Lab[w][k-1] = Lab[w][k] + 1;
                p2.w = w;
                p2.k = k-1;

                q.push(p2);
            }
            else if (Lab[w][k+1] == 0) {
                Lab[w][k+1] = Lab[w][k] + 1;
                p2.w = w;
                p2.k = k+1;

                q.push(p2);
            }
        }
    }

    return wyjscie;
}



int main() {
    int lab[N][N];
    pole p1, p2;
    wczytaj(lab);
    // TODO: wypisz(lab);
    cout << "wsp. pola startowego: (" << p1.w << ", " << p1.k << ")\n";

    if (droga(lab, p1, p2)) {
        oznaczdroge(lab, p2.w, p2.k);
        //TODO: wypisz(lab);
    }
    else {
        cout << "brak drogi\n";
    }
    
}





// lista 
/*
    - jednokierunkowa (singly linked)
        - cykliczna (ostatni idzie do początku)
    - dwukierunkowa (doubly linked)
        - cykliczna


    problem flawiusza - ludzie przy stole

*/



