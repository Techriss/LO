#include <iostream>
using namespace std;


/*

  | 0 | 1 |
0 |
--------
1 |
--------
3 |

*/

int main()
{
    int arr[3][2] = { 1, 2, 3, 4, 5, 6 };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    
}