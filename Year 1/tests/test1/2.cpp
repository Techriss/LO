// program sprawdzający czy 1 liczba dzieli 2 (przy zalozeniu 1 > 2); jesli jest to ile sie miesci

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    if (a % b == 0)
    {
        cout << a << " dzieli sie przez " << b << " czego wynikiem jest " << a/b << endl;
    }
    else
    {
        cout << a << " nie dzieli sie przez b" << endl;
    }

    return 0;
}