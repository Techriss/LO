#include <iostream>
using namespace std;

/*
    specs
        dane:
            - 3 paliki a, b, c
            - l. nat. n > 0 (l. krazkow)
            - n roznej wielkosci nalozone na palik a malejaca
        wynik:
            - n krazkow roznej wielkosci nalozone na palik b malejaca
*/


void hanoi(int n, char a, char b, char c)
{
    if (n == 0) return;
    hanoi(n-1, a, c, b);
    cout << a << " na " << b << endl;
    hanoi(n-1, c, b, a);
}

int main()
{
    cout << "-- dla 3: \n";
    hanoi(3, 'A', 'B', 'C');

    cout << "-- dla 4: \n";
    hanoi(4, 'A', 'B', 'C');

    cout << "-- dla 5: \n";
    hanoi(5, 'A', 'B', 'C');
}