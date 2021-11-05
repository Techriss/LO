#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a, b, w;
    cin >> a, b;


    // a
    w = pow(a, 3) + cos(b) * sqrt(a + b);

    // b
    w = abs(a - b) + sin(a) * sqrt(b);

    // c
    w = sqrt((3+sqrt(a*b))/abs(pow(b, 2) - 20));

    // d
    w = sin(pow(a+b, 4)/(sqrt(11) + sin(b)));

    // e
    w = pow(cos(a+1)/abs(sqrt(5) - b), 3);
}