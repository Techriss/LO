#include <iostream>
using namespace std;

// n kolejnych poteg liczby 3
int main()
{
    int n, output = 1;
    cout << "Wprowadz wykladnik potegi: ";
    cin >> n;

    for (int i = 1; i <= n; output *= 3, i++);
    cout << "3 do potegi " << n << " wynosi " << output;
}