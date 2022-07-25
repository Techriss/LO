#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj wykladnik potegi: ";
    cin >> n;

    int output = 1;

    for (int i = 0; i < n; output *= 2, i++);

    cout << n << " potega 2 to " << output << endl;
}