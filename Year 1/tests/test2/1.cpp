#include <iostream>
using namespace std;

// silnia
int main()
{
    int n, output = 1;
    cout << "Wprowadz liczbe, z ktorej chcesz obliczyc silnie: ";
    cin >> n;

    for (int i = n; i > 1; output *= i, i--);
    cout << "Silnia liczby " << n << " wynosi " << output;
}