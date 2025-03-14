#include <iostream>
#include <vector>
using namespace std;


int horner(vector<int> cs, int st, int x) {
	if (st == 0) return cs[0];
	return x * horner(cs, st - 1, x) + cs[st];
}


long long exp(long long a, long long b){
    if (b == 0) return 1;
    if (b % 2 == 0) {
        long long aux = exp(a, b / 2);
        return aux * aux;
    }

    return a * exp(a, b - 1);
}


int main() {
    int st = 3, x = 1;
    vector<int> cs = { 1, -1, 1, 1 };
    cout << horner(cs, st, x) << endl;
    cout << exp(5, 12) << endl;
}