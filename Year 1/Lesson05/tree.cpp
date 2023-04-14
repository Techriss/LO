#include <iostream>
using namespace std;

int main()
{
    int max;
    cout << "Podaj liczbe: ";
    cin >> max;

    for (int i = 1; i <= max; i += 2)
    {
        for (int j = 1; j <= max; j++)
        {
            if (j <= (max-i)/2)
            {
                cout << " ";
            }
            else if (j <= max-((max-i)/2))
            {
                cout << "*";
            }
        }
        
        cout << endl;
    }

    return 0;
}