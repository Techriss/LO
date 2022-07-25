#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n)
{
    if (n < 2) return false;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

bool primesq(int n)
{
    int s = sqrt(n);
    return prime(s);
}

int main()
{
    int x = 121, y = 452345;
    cout << "dla x: " << primesq(x) << endl;
    cout << "dla y: " << primesq(y) << endl;
}