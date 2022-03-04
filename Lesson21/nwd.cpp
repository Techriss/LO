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

int main()
{
    cout << NWD(12, 18);
}