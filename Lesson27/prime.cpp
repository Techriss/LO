#include <iostream>
using namespace std;

// 0 i 1 nie sa ani pierwsze ani zlozone
bool isprime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int n = 30;
    while (n --> 0)
    {
        cout << n << ": " << isprime(n) << endl;
    }
}