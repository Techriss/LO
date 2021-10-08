#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x;

        
    cout << "Podaj a: ";
    cin >> a;
    
    while (a == 0)
    {
        cout << "A nie moze byc 0" << endl;
        cout << "Podaj a: ";
        cin >> a;
    }

    cout << "Podaj b: ";
    cin >> b;

    cout << "Podaj c: ";
    cin >> c;

    // ax + b = c;
    // (c - b) / a

    x = (c - b) / a;
    cout << "X jest rowne " << x << endl;

    return 0;
}