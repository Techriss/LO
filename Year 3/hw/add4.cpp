#include <iostream>
#include <algorithm>
using namespace std;


string addBinary(string a, string b)
{
    string res;
    int c = 0, i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || c == 1)
    {
        c += i >= 0 ? a[i --] - '0' : 0;
        c += j >= 0 ? b[j --] - '0' : 0;
        res = char(c % 2 + '0') + res;
        c /= 2;
    }
    
    return res;
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