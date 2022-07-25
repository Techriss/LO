#include <iostream>
using namespace std;

int main()
{
    string imie, nazwisko;
    cout << "podaj imie: ";
    cin >> imie;

    cout << "podaj nazwisko: ";
    cin >> nazwisko;

    cout << imie[0] << " " << nazwisko[nazwisko.size() - 1] << endl;

}