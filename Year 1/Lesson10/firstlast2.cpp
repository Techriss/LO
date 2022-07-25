#include <iostream>
using namespace std;

int main()
{
    int size = 6, temp, arr[6] = { 1, 2, 3, 4, 5, 6 };

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // 0, 5; 1, 4; 2, 3 => 6/2
    for (int i = 0; i < size/2; i++)
    {
        // temp = arr[i];
        // arr[i] = arr[6-1-i];
        // arr[6-1-i] = temp;

        swap(arr[i], arr[6-1-i]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}