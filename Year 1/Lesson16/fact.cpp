#include <iostream>
using namespace std;

// rekursja / rekurencja
int silnia_rec(int n)
{
    if (n == 0) return 1;
    return silnia_rec(n - 1) * n;
}

// iteracja
int silnia_it(int n)
{
    int output = 1;
    for (int i = 2; i <= n; i++)
    {
        output *= i;
    }

    return output;
}



int main()
{
    cout << silnia_rec(5) << endl;
    cout << silnia_it(5) << endl;
}