#include <iostream>
#include <vector>
using namespace std;

// rekursja
int fib_rec(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_rec(n-1) + fib_rec(n-2);
}

// iteracja (tabulacja)
int fib_it(int n)
{
    vector<int> fib(n+1);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}



int main()
{
    cout << fib_rec(10) << endl;
    cout << fib_it(10) << endl;
}