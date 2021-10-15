#include <iostream>
using namespace std;

int main()
{
    for (int i = 5; i <= 100; i += 5)
    {
        cout << i << endl;
        if (i == 50)
        {
            break;
        }
    }

    return 0;
}