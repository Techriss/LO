#include <iostream>
using namespace std;

int main()
{
    cout << endl << "For" << endl;
    for (int i = 32; i >= 2; i /= 2)
    {
        cout << i << endl;
    }



    cout << endl << "While" << endl;
    int j = 32; 
    while (j >= 2)
    {
        cout << j << endl;
        j /= 2;
    }



    cout << endl << "Do While" << endl;
    int k = 32;
    do
    {
        cout << k << endl;
        k /= 2;
    }
    while (k >= 2);

    return 0;
}