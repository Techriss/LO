#include <iostream>
using namespace std;

int main()
{
    char s[5] = "john";

    for (int i = 0; i < 4; i++)
    {
        cout << s[i] << " ";
    }

    for (int i = 3; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
}