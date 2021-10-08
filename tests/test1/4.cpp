// program wczytujacy 3 liczby; wypisac najwieksza oraz srednia

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    double avg;
    
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    avg = (double)(a + b + c) / 3;
    max = a;

    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }

    cout << "Najwieksza liczba to " << max << endl;
    cout << "Srednia liczb to : " << avg << endl;

    return 0;
}