#include <iostream>
#include <vector>
using namespace std;



string encode(string jawny, int klucz)
{
    string szyfrogram;
    int dl = jawny.size();

    for (int i = 0; i < klucz; i++)
        for (int j = i; j < dl; j += klucz)
            szyfrogram += jawny[j];


    return szyfrogram;
}

vector<char> encode2(string jawny, int klucz)
{
    int dl = jawny.size();
    vector<char> szyfrogram(dl);

    for (int i = 0; i < klucz; i++)
        szyfrogram[i/klucz + i%klucz] = jawny[i];


    return szyfrogram;
}

void printchars() {
    for (int i = 48; i <= 126; i++)
        cout << (char)i << " ";
}

int main() {
    printchars();
}