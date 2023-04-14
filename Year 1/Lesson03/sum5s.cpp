#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
    }

    cout << "Suma wielokrotnosci 5 od 1 do 100 wynosi " << sum << endl;
}