#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;

    switch (n)
    {
        case 1: cout << "Poniedziałek" << endl; break; 
        case 2: cout << "Wtorek" << endl; break; 
        case 3: cout << "Środa" << endl; break; 
        case 4: cout << "Czwartek" << endl; break; 
        case 5: cout << "Piątek" << endl; break; 
        case 6: cout << "Sobota" << endl; break; 
        case 7: cout << "Niedziela" << endl; break; 
        default: cout << "Podano bledna wertosc" << endl; break;
    }
}