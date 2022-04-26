#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }

    return a + b;
}

int NWD_r(int x, int y)
{
    if (y == 0) return x;
    return NWD_r(y, x % y);
}

int main()
{
    cout << NWD(9999999, 1) << endl;
    cout << NWD_r(9999999, 1);
}