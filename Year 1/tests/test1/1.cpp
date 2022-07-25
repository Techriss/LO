// program liczacy pole i objetosc prostopadloscianu; dane podaje użytkownik

#include <iostream>
using namespace std;

int main()
{
    // v = 1*b*h;
    // pc = 2(a*b + a*h + b*h)

    int a, b, h;

    cout << "Podaj wartosc a: ";
    cin >> a;
    cout << "Podaj wartosc b: ";
    cin >> b;
    cout << "Podaj wartosc h: ";
    cin >> h;

    int pc = 2 * (a*b + a*h + b*h);
    int v = a * b * h;

    cout << "Pole prostopadloscianu wynosi: " << pc << endl;
    cout << "Objetosc prostopadloscianu wynosi: " << v << endl;


    return 0;
}