#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    cout << "Podaj c: ";
    cin >> c;

    if ((a >= 0 && a <= 20 &&
        a > b &&
        c > 10) ||
        c == 0)
        {
            cout << "Warunek spelniony!";
        }
        else
        {
            cout << "Warunek nie jest spelniony";
        }

    return 0;
}