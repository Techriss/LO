#include <iostream>
using namespace std;

int bun(int m)
{
    if (m == 0 || m == 1) return 1;
    return bun(m-1) + bun(m-2);
}

int main()
{
    int m = 120;
    cout << 2 * bun(m);
} 