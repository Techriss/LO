#include <iostream>
using namespace std;

int main()
{
    int x, sum = 0;

    while (true)
    {
        cin >> x;
        sum += x;
        if (x == 0) break;
    }

    cout << "suma byla " << sum << endl;
}
