#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int not_hs = 0, as_and_os = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'h')
        {
            not_hs++;
        }

        if (s[i] == 's' || s[i] == 'S' || s[i] == 'o' || s[i] == 'O')
        {
            as_and_os++;
        }

    }
    cout << endl << "Jest " << not_hs << " znakow niebedacych h i " << as_and_os << " znakow bedacych s/S/o/O";
}