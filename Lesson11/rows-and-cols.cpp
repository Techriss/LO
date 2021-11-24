#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = 
    {
        {1, 3, 5},
        {6, 8, 10},
        {11, 17, 15},
        {16, 18, 20}
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}