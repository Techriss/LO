#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];

    // a
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // b
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // c
    int iloczyn = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] % 7 != 0)
            {
                iloczyn *= arr[i][j];
            }
        }
    }
    cout << "iloczyn niepodzielnych przez 7 to: " << iloczyn << endl;


    // d
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] % 7 != 0)
            {
                if (i * j > 0)
                {
                    sum++;
                }
            }
        }
    }

    cout << "liczba elementow krotych iloczyn indeksow jest dodatni: " << sum << endl;
    


    // e
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > 4)
            {
                cout << "ISTNIEJE WIEKSZA OD 4" << endl;
                return 0;
            }
        }
    }
}