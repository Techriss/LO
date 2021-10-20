#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "1. Nowy: \n2. Otworz\n3. Zapisz\n4. Zapisz jako\n5. Drukuj\n6. Wyjdz\n";
    cin >> n;


    // switch method
    switch (n)
    {
        case 1: cout << "tworzenie nowego pliku... " << endl; break;
        case 2: cout << "otwieranie... " << endl; break;
        case 3: cout << "zapisywanie... " << endl; break;
        case 4: cout << "zapisywanie jako... " << endl; break;
        case 5: cout << "drukowanie... " << endl; break;
        case 6: cout << "wychodzenie... " << endl; break;
        default: cout << "wybrano niepoprawna opcje" << endl;
    }

    // ifs method
    if (n == 1) cout << "tworzenie nowego pliku... " << endl;
    else if (n == 2) cout << "otwieranie... " << endl;
    else if (n == 3) cout << "zapisywanie... " << endl;
    else if (n == 4) cout << "zapisywanie jako... " << endl;
    else if (n == 5) cout << "drukuj... " << endl;
    else if (n == 6) cout << "wychodzenie... " << endl;
    else cout << "wybrano niepoprawna opcje" << endl;
}