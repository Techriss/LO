#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    // ile a i ile nie b parzystych
    int as = 0, notbs = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
        {
            as++;
        }

        if (s[i] != 'b' && s[i] != 'B' && i % 2 == 0)
        {
            notbs++;
        }
    }

    cout << "A jest " << as << " a znakow nie b na parzystych indeksach jest " << notbs << endl;
}