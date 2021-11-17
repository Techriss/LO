#include <iostream>
using namespace std;

int main()
{
    int arr[10], sum = 0, iloczyn = 1;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];

        if (arr[i] < 6)
        {
            iloczyn *= arr[i];
        }
    }
}