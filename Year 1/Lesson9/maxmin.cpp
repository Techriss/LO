#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int min = arr[0], max = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
    }
}