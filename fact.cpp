#include <iostream>
using namespace std;

int main()
{
    int n;
    long long output = 1;
    cin >> n;

    for (int i = n; i > 1; output *= i, i--);
    cout << output << endl;

    return 0;
}