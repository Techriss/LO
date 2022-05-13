#include <iostream>
#include <string>
using namespace std;

int inverse(int n)
{
    int l = 0;
    while (n != 0)
    {
        l = l*10 + n%10;
        n /= 10;
    }

   return l;
}

bool prime(int n)
{
    if (n < 2) return false;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

bool mirror(int x, int y) 
{
    return prime(x) && prime(y) && inverse(x) == y;
}

int main()
{
    int x, y;
    cout << "Podaj liczby: " << endl;
    cin >> x >> y;

    mirror(x, y) ? cout << "tak" << endl : cout << "nie" << endl;
}