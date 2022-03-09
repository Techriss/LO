#include <iostream>
using namespace std;

double a(int n)
{
    if (n == 1) return 2;
    return 3*a(n-1) + 0.5;
}

double b(int n)
{
    if (n == 1) return 0.5;
    if (n == 2) return 1;
    return 3*b(n-2) + b(n-1);
}

double c(int n)
{
    if (n == 1) return 2;
    if (n == 2) return -4;
    return c(n-2) + 2*c(n-1) + 0.5;
}

double d(int n)
{
    if (n == 1) return -1.5;
    if (n == 2) return 0;
    if (n == 3) return 1.5;
    return 2*d(n-3) + d(n-2) - d(n-1);
}

double e(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return e(n-3) + 2*e(n-1);
}

int main()
{
    
}