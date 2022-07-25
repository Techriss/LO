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

int NWW(int a, int b)
{
    return (a*b)/NWD(a, b);
}

int main()
{
    cout << NWD(NWD(NWD(36, 12), 18), 9);
}