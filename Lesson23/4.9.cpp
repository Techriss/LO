#include <iostream>
using namespace std; 

int fact(int n)
{
    if (n == 1) return n;
    return n * fact(n-1);
}

int newton_rec(int n, int k)
{
    return fact(n) / (fact(k) * fact(n - k));
}

int newton_it(int n, int k)
{
    if (k < 0 || n < k) return -1;
    int fact_n = 1, fact_k = 1, fact_nk = 1;
    for (int i = 1; i <= n; fact_n *= i, i++);
    for (int i = 1; i <= k; fact_k *= i, i++);
    for (int i = 1; i <= n-k; fact_nk *= i, i++);

    return fact_n / (fact_k * fact_nk);
}

int main()
{
    int n = 3, k = 2;
    cout << newton_rec(n, k) << endl;
    cout << newton_it(n, k) << endl;
}

