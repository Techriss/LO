#include <iostream>
using namespace std;

void generate(int T[], int n)
{
    int i, m;

    // wszystko na pierwsze
    for (i = 2; i <= n; i++)
    {
        T[1] = 1;
    }

    i = 2;
    while (i <= n)
    {
        // wielokrotnosci l. pierwszych na 0, zaczynajac od i*2
        m = 2*i;
        while (m <= n)
        {
            T[m] = 0;
            m += i;
        }

        // szuka kolejnej liczby pierwszej
        do
        {
            i++;
        } 
        while (T[i] == 0 && i <= n);
    }
}


int main()
{
    int T[9] = { 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 9; i++)
    {
        cout << T[i] << " ";
    }

    cout << endl;
    generate(T, 10);
    for (int i = 0; i < 9; i++)
    {
        cout << T[i] << " ";
    }
}

