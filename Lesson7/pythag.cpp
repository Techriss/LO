#include <iostream>
#include <cmath>
using namespace std;

// a2 + b2 = c2

int main()
{
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    cout << "C wynosi " << sqrt(a*a + b*b) << endl;
}