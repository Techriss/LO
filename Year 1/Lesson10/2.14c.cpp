#include <iostream>
using namespace std;

// iloczyn elementów tablicy mniejszych od 6
int main()
{
    int arr[10];

    // a)
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // b)
    int sum = 0;
    for (int i = 0; i < 10; sum += arr[i], i++);

    // c)
    int iloczyn = 1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 6)
        {
            iloczyn *= arr[i];
        }
    }
}