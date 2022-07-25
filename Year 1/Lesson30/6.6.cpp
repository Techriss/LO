#include <iostream>
#include <vector>
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

vector<int> factorize(int n)
{
    vector<int> facts;
    int fact = n;
    while (n > 1)
    {
        if (prime(fact) == true)
        {
            while (n % fact == 0)
            {
                n /= fact;
                facts.push_back(fact);
            }
        }
        fact--;
    }

    return facts;
}



bool semiprime(int n)
{
    vector<int> facts = factorize(n);
    return facts.size() == 2 && prime(facts[0]) && prime(facts[1]);
}

bool semiprime2(int n)
{
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return prime(i) && prime(n/i);
    }

    return false;
}

int main()
{
    int x = 34, y = 56;
    cout << semiprime(x) << endl;
    cout << semiprime(y) << endl;
    cout << semiprime2(x) << endl;
    cout << semiprime2(y) << endl;
}
