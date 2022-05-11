#include <iostream>
using namespace std;

/*
    SITO ERASTOTENESA

    algorytm generujacy liczby pierwsze z przedzialu 2 do n.
    dzialanie tego algorytmu opiera sie na wlasnsosci liczb zlozonych
    mowiaca, ze liczba zlozona jest wielokrotnoscia conajmniej 1 liczby pierwszej


    przyklad:
        n = 10;

        i    | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10
        T[i] | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1

        i    | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10
        T[i] | 1 | 1 | 0 | 1 | 0 | 1 | 0 | 0 | 0
*/