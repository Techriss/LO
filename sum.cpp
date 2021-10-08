#include <iostream>
using namespace std;

int main()
{
    int output = 1;
    for (int i = 1; i < 10; i++, output *= i);

    cout << output << endl;

    return 0;
}