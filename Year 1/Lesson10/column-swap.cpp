#include <iostream>
using namespace std;

int main()
{
    int arr[2][10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

    for (int j = 0; j < 10; j++)
    {
        swap(arr[0][j], arr[1][j]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}