#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int ans = rand() % 1000, guess;

    do
    {
        cout << "Zgadnij liczbe: ";
        cin >> guess;

        if (guess < ans) 
        {
            cout << "Podana liczba jest za mala." << endl;
        }
        else if (guess > ans)
        {
            cout << "Podana liczba jest za duza." << endl;
        }
        else
        {
            cout << "Gratulacje, udalo ci sie!" << endl;
        }
    }
    while (guess != ans);
}