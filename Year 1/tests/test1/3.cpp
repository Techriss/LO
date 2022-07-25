// w zaleznosci od podanego przez uzytkownika wzrostu wypisze odpowiedni tekst, inaczej wartosc zla

#include <iostream>
using namespace std;

int main()
{
    int h;

    cout << "Podaj swoj wzrost w cm: ";
    cin >> h;

    if (h < 150)
    {
        cout << "karzel" << endl;
    }
    else if (h >= 150 && h < 160)
    {
        cout << "bardzo niski" << endl;
    }
    else if (h >= 160 && h < 170)
    {
        cout << "niski" << endl;
    }
    else if (h >= 170 && h < 180)
    {
        cout << "sredni" << endl;
    }
    else if (h >= 180 && h < 190)
    {
        cout << "wysoki" << endl;
    }
    else if (h >= 190 && h < 220)
    {
        cout << "bardzo wysoki" << endl;
    }
    else
    {
        cout << "podana wartosc jest zla" << endl;
    }

    return 0;
}