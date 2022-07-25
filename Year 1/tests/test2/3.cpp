#include <iostream>
using namespace std;

// wyswietlajacy prostokat; wysokosc i szerokosc wczytywane z klawiatury
int main()
{
    int a, b;
    cout << "Wprowadz wysokosc prostokota: ";
    cin >> a;
    cout << "Wprowadz szerokosc prostokota: ";
    cin >> b;

    cout << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}