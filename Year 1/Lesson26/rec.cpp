#include <iostream>
using namespace std;

int sumr(int n)
{
    if (n == 1) return 1;
    return sumr(n-1) + n;
}

int sumi(int n)
{
    int sum = 0;
    while (n-- > 0)
    {
        sum += n+1;
    }

    return sum;
}



int ar(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;

    return -1 * ar(n-1) * ar(n-2);
}


int fun(int n)
{
    if (n == 1) return -1;
    if (n > 1) return -fun(n-1) * (n-4);
}

int fun3(int n)
{
    if (n == 1) return -1;
    if (n > 1) return -fun3(n-1) * (n-3);
}

int main()
{
    cout << "sum of 15: " << ar(3) << endl;

    
}