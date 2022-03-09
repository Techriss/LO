#include <iostream>
using namespace std;

#define N 8

double a(int n)
{
    if (n == 1) return 2;
    if (n % 2 == 0) return a(n-1) + 4;
    return a(n-1) * 3;
}

double b(int n)
{
    if (n == 1) return -2;
    if (n == 2) return 3;
    if (n % 2 != 0) return b(n-2) * 2;
    return 3*b(n-1) - b(n-2) + 1;
}

int main()
{
    cout << "a: ";
    for (int i = 1; i <= N; i++)
    {
        cout << a(i) << " ";
    }

    cout << endl;

    cout << "b: ";
    for (int i = 1; i <= N; i++)
    {
        cout << b(i) << " ";
    }
}