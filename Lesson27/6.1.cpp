#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n)
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
    int fact = 2;
    while (fact <= n)
    {
        while (n % fact == 0)
        {
            n /= fact;
            facts.push_back(fact);
        }

        fact++;
    }

    return facts;
}

int main()
{
    int n;
    cout << "podaj liczbe: ";
    cin >> n;

    int sum = 0;
    vector<int> facts = factorize(n);
    for (int i = 0; i < facts.size(); i++)
    {
        sum += facts[i];
    }

    if (isprime(sum))
    {
        cout << "suma czynnikow liczby " << n << " jest liczba pierwsza" << endl;
    }
    else 
    {
        cout << "suma nie jest liczba pierwsza" << endl;
    }
}