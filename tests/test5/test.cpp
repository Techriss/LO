#include <iostream>
using namespace std;

//1. hanoi
void hanoi(int n, char a, char b, char c)
{
    if (n == 0) return;
    hanoi(n-1, a, c, b);
    cout << a << " -> " << b << endl;
    hanoi(n-1, c, b, a);
}

//2. fib
int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}


//3. euk 4 wersje
int euk_mod_i(int a, int b)
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

int euk_mod_r(int a, int b)
{
    if (b == 0) return a;
    return euk_mod_r(b, a % b);
}

int euk_sub_i(int a, int b)
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

int euk_sub_r(int a, int b)
{
    if (a != b)
    {
        return euk_sub_r(a>b ? a-b : a, b>a ? b-a : b);
    }

    return a;
}

//4. 
int a_r(int n)
{
    if (n == 1) return 1;
    if (n > 1) return 2 * a_r(n-1);
}

int a_i(int n)
{
    int output = 1;
    while (n > 1)
    {
        output *= 2;
        n--;
    }

    return output;
}

//5. 
int b(int n)
{
    if (n == 1) return 2;
    if (n == 2) return 4;
    if (n % 2 != 0) return (2 * b(n-1)) + b(n-1) + 3;
    if (n % 2 == 0) return (4 * b(n-1)) - b(n-2) + 5;
}

int c(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    if (n > 3) return c(n-3) + c(n-2) - (2*c(n-1));
}







int main()
{
    cout << a_i(15) << endl;
    cout << a_r(15) << endl;
    



}