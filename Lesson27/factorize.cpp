#include <iostream>
#include <vector>
using namespace std;


// 0 i 1 nie sa ani pierwsze ani zlozone
bool isprime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

// faktoryzacja liczby naturalnej to rozklad na czynniki pierwsze
vector<int> factorize(int n)
{
    vector<int> facts;
    int fact = n;
    while (n > 1)
    {
        if (isprime(fact) == true)
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


int main()
{
    int n = 30;
    cout << "facts: ";
    
    vector<int> facts = factorize(n);
    for (int i = 0; i < facts.size(); i++)
    {
        cout << facts[i] << " ";
    }
}