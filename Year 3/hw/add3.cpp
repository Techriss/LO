#include <iostream>
#include <algorithm>
using namespace std;



string addBinary(string a, string b) {
    string res;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum > 1 ? 1 : 0;
        res += char(sum % 2 + '0');
    }

    if (carry) res += char(carry % 2 + '0');
    reverse(res.begin(), res.end());
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