#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1, s2("ma"), s3 = "kota";
    s1 = "ala";

    if (s1 == s2)
    {
        cout << "s1 jest rowne s2" << endl;
    }
    else if (s1 < s2)
    {
        cout << "s1 jest wczesniej w slowniku od s2" << endl;
    }
    else 
    {
        cout << "s1 jest pozniej w slowniku od s2" << endl;
    }

    // konkatenacja
    s2 += 'n';

    s3 += "!!!";

    s3[1] = '*';

    // funkcje
    s1.empty(); // true jesli pusty, false jesli nie
    s1.size();  // ile znakow
    s1.at(4);   // znak na indeksie 4
    s1.clear(); // usuwa wszystkie znaki
    s1.c_str(); // konwersja na char[]
    s1.substr(0, 2); // ciag 2 znakowy od 0
    s2.find('h'); // pozycja gdzie jest h
}
