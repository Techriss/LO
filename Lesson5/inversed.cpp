#include <iostream>
using namespace std;

int main()
{
    int max;
    cout << "Podaj liczbe: ";
    cin >> max;

    for (int i = max; i >= 1; i--)
    {
        for (int j = 1; j <= max; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        
        cout << endl;
    }

    

    return 0;
}