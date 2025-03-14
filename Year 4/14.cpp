#include <iostream>
#include <vector>
#include <pair>
using namespace std;



/*
    2 l. p - p, q
    n = p*q
    m = (p-1)*(q-1)

    nwd(e, m) = 1
    znajdujemy takie e, dla którego nwd(e, m) = 1 
    => klucz publiczny (e, m) => (5, 299)



    nwd(e, m) = x*e + y*m
    x to d
    => klucz prywatny (d, n) => (5, 299)



    zad: wyznaczyc klucz publiczny i prywatny dla liczb 17, 19
    n = 323
    m = 288

    nwd(e, 288) = 1 => e = 5
    1 = x*5 + y*288

    288 mod 5 = 3
    288 = 3 + 57*5

    (173, 323)





*/

int nwd(int a, int b) {
    if (b == 0) return a;
    return nwd(b, a % b);
}



pair<int, int> nwdp(int a, int b) {
    if (b = 0) return make_pair(1, 0);
    auto aux = nwdp(b, a % b);
    return make_pair(aux, second, aux.first - (a/b)*aux.second);
}


int rsa() {
    int p, q, m, n, d, e;
    n = p * q;
    m = (p - 1) * (q - 1);
    e = 3;

    while (nwd(e, m) != 1) e += 2;
}




int horner(vector<int> cs, int st, int x) {
	if (st == 0) return cs[0];
	return x * horner(cs, st - 1, x) + wsp[st];
}