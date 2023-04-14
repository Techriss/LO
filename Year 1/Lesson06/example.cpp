#include <iostream>
using namespace std;

int main()
{
    while (1) { cout << "nieskonczonosc" << endl; }
    // 1 == true
    while (true) { cout << "nieskonczonosc" << endl; }


    while (0) { cout << "nigdy sie nie wypisze" << endl; }
    // 0 == false
    while (false) { cout << "nigdy sie nie wypisze" << endl; }


    do { cout << "wypisze sie raz ze wzgledu na do..while" << endl; }
    while (0);

    do { cout << "wypisze sie raz ze wzgledu na do..while" << endl; }
    while (false);


    do {  cout << "nieskonczonosc" << endl; }
    while (1);

    do  { cout << "nieskonczonosc" << endl; }
    while (true);

    for (;;) { cout  << "nieskonczonosc" << endl; }
}
