#include <iostream>
#include <string>
using namespace std;

string inverse(int n)
{
    string s;
    while (n > 0)
    {
        s += (n % 10) + 48;
        n /= 10;
    }

    cout << s << endl;
}

int inverse2(int n)
{
    int l = 0;
    while (n != 0)
    {
        l = l*10 + n%10;
        n /= 10;
    }

    cout << l << endl;
}



int main()
{
    int n = 123456;
    cout << "n: " << n << endl;
    cout << inverse(n) << endl;
    cout << inverse2(n) << endl;

}