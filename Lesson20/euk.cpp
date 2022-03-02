#include <iostream>
using namespace std;

int euk_it(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }

    return a;
}

int euk_rec(int a, int b)
{
    if (a != b)
    {
        return euk_rec(a>b ? a-b : a, b>a ? b-a : b);
    }

    return a;
}


int main()
{
    
}