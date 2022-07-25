#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstname, lastname;
    cout << "Podaj imie: ";
    cin >> firstname;
    cout << "Podaj nazwisko: ";
    cin >> lastname;

    cout << "Dlugosc imienia wynosi " << firstname.size() << " a dlugosc nazwiska wynosi " << lastname.size() << endl;
}