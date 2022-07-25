#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    cin >> s;



    // 1
    cout << "tekst od tylu to: ";
    for (int i = s.size()-1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;



    // 2
    char c;
    int count = 0;

    cout << "Podaj tekst: ";
    cin >> s;

    cout << "Podaj litere do wyszukania: ";
    cin >> c;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c) count++;
    }

    cout << "jest " << count << " liter " << c << " w tekscie" << endl;



    // 3
    count = 0;
    cout << "Podaj tekst: ";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ') count++;
    }

    cout << "liter bez spacji jest " << count << endl;



    // 4
    cout << "Podaj tekst: ";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    cout << endl;



    // 5
    cout << "Podaj tekst: ";
    cin >> s;

    int notas_odd = 0;
    int zs_even = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && i % 2 != 0) notas_odd++;
        else if (s[i] == 'z' && i % 2 == 0) zs_even++;
    }

    cout << "nie a i nieparzystych jest " << notas_odd << " a z i parzystych jest " << zs_even << endl;
}