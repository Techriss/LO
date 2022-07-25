#include <iostream>
using namespace std;

// Krzysztof Kowalski

int main()
{
    // 1
    int T1[20] = { 1, 2, 1, 10, 2, 3, 1, 3, 4, 1, 4, 5, 7, 8, 9, 10, 1, 1, 3, 4 };
    int ile_jeden = 0;

    for (int i = 0; i < 20; i++)
    {
        if (T1[i] == 1) ile_jeden++;
    }


    // 2
    cout << "Liczby parzyste: ";
    for (int i = 0; i < 20; i++)
    {
        if (T1[i] % 2 == 0)
        {
            cout << T1[i] << " ";
        }
    }
    cout << endl;   

    // 3
    cout << "Liczby z przedziału <4, 15): ";
    for (int i = 0; i < 20; i++)
    {
        if (T1[i] >= 5 && T1[i] < 15)
        {
            cout << T1[i] << " ";
        }
    }
    cout << endl;

    // 4 
    int T2[3][2] = { 0, 1, 2, 3, 4, 5 };
    int suma = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            suma += T2[i][j];
        }
    }
    cout << "Suma wartosci tablicy wynosi: " << suma << endl;

    // 5
    int T3[4][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int wiersz;
    int ile_zer = 0;

    cout << "Podaj wiersz: ";
    cin >> wiersz;

    for (int i = 0; i < 5; i++)
    {
        if (T3[wiersz][i] == 0) ile_zer++;
    }

    cout << "W wierszu " << wiersz << " liczba 0 wystepuje " << ile_zer << " razy" << endl;


    // 6
    int T4[4][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };

        // a
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> T4[i][j];
            }
        }

        // b
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << T4[i][j] << " ";
            }

            cout << endl;
        }

        // c
        int iloczyn_podz_przez_trzy = 1;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (T4[i][j] % 3 == 0) iloczyn_podz_przez_trzy *= T4[i][j];
            }
        }

        cout << "Suma wartosci podzielnych przez 3 wynosi " << iloczyn_podz_przez_trzy << endl;


        // d
        int suma_nie_zero = 0;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (T4[i][j] != 0) suma_nie_zero += T4[i][j];
            }
        }

        cout << "Suma wartosci nie bedacych 0 wynosi " << suma_nie_zero << endl;

        // e
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (T4[i][j] >= 20)
                {
                    cout << "Element o wartosci nie mniejszej od 20 istnieje w tablicy" << endl;
                    return 0;
                }
            }
        }

        cout << "Element o wartosci nie mniejszej od 20 nie istnieje w tablicy" << endl;
}