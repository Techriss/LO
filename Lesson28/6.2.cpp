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

int digitsum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

bool isSmith(int n)
{
    int fsum = 0;
    vector<int> fs = factorize(n);
    for (int i = 0; i < fs.size(); i++)
    {
        fsum += digitsum(fs[i]);
    }

    return (n > 1 && !isprime(n) && digitsum(n) == fsum);
}

int main()
{
    cout << isSmith(202) << endl;
    cout << isSmith(2147483647);
}