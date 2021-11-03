#include <iostream>
using namespace std;

// znajdz litere sama przez siebie wpisana
int main()
{
    char x, guess;
    cout << "Wprowadz litere: ";
    cin >> x;

    do
    {
        cout << "Zgadnij litere: ";
        cin >> guess;
    }
    while (guess != x);


    cout << "Zgadles!";
}