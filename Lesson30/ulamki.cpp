#include <iostream>
using namespace std;

int NWD(int a, int b)
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

int NWW(int a, int b)
{
    return (a*b)/NWD(a, b);
}

int main()
{
    double p1, q1, p2, q2;
    cout << "wprowadz 1 licznik: ";
    cin >> p1;
    cout << "wprowadz 1 mianownik: ";
    cin >> q1;
    cout << "wprowadz 2 licznik: ";
    cin >> p2;
    cout << "wprowadz 2 mianownik: ";
    cin >> q2;

    double p3, q3;
    p3 = p1*q2 + p2*q1;
    q3 = q1*q2;
    cout << p1 << "/" << q1 << " + " << p2 << "/" << q2 << " = " << p3 << "/" << q3 << endl;

    cout << (p1*NWD(q1, q2)/q1 + p2*NWD(q1, q2)/q2) / NWW(q1, q2) << endl;
}