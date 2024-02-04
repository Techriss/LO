#include <iostream>
#include <algorithm>
using namespace std;



string addBinary(string a, string b) {
    string res = "0";
    int ri = 0;
    int ai = a.size()-1;
    int bi = b.size()-1;

    while (ai >= 0 && bi >= 0) {
        int sum = (int)(a[ai])-48 + (int)(b[bi])-48 + (int)(res[ri])-48;

        if (sum == 0) {
            res += "0";
        } 
        else if (sum == 1) {
            res[ri] ='1';
            res += "0";
        }
        else if (sum == 2) {
            res[ri] = '0';
            res += "1";
        }
        else {
            res[ri] = '1';
            res += "1";
        }

        ri++; ai--; bi--;
    }
    
    while (ai >= 0) {
        int sum = (int)(a[ai])-48 + (int)(res[ri])-48;
        
        if (sum == 0) {
            res += "0";
        } 
        else if (sum == 1) {
            res[ri] ='1';
            res += "0";
        }
        else if (sum == 2) {
            res[ri] = '0';
            res += "1";
        }

        ai--; ri++;
    }

    while (bi >= 0) {
        int sum = (int)(b[bi])-48 + (int)(res[ri])-48;
        if (sum == 0) {
            res += "0";
        } 
        else if (sum == 1) {
            res[ri] ='1';
            res += "0";
        }
        else if (sum == 2) {
            res[ri] = '0';
            res += "1";
        }

        bi--; ri++;
    }

    if (res[ri] == '0') res.pop_back();

    string res_rev;
    for (int i = res.size()-1; i >= 0; i--) res_rev += res[i];
    return res_rev;
}


long long toDecimal(string b) {
    long long res = 0;

    for (int i = 0; i < b.size(); i++) {
        res = res * 2 + b[i]-'0';
    }

    return res;
}

string toBinary(long long n) 
{ 
    string res;

    while (n) { 
        res += n & 1 ? '1' : '0';
        n >>= 1;
    } 

    reverse(res.begin(), res.end());
    return res;
} 



int main() {
    long long n, m;

    cout << "pierwsza liczba (system dziesietny): ";
    cin >> n;
    cout << "druga liczba (system dziesietny): ";
    cin >> m;

    string a = toBinary(n);
    string b = toBinary(m);

    string res = addBinary(a, b);

    cout << a << " + " << b << " = " << res << endl;
    cout << toDecimal(a) << " + " << toDecimal(b) << " = " << toDecimal(res);
}