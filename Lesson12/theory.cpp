#include <iostream>
using namespace std;

int main()
{
    /* 
        mozliwosci wskaznikow
            1. dynamiczne rezerwowanie i zwalnianie pamięci
            2. zwiekszenie szybkosci zaposu odczytu komorek w tablicy
            3. dawanie funkcjom do pracy oryginalow zmiennych z programu wywolujacego
            4. mozliwosc wspolpracy w urzadzeniem zewnetrznym
    

        wskazniki - typ *nazwa
        referencje - typ &nazwa = zmienna
    */

   int n = 5;
   int *p = &n;

   cout << n; // 5
   cout << p; // 0x1e3f5f
   cout << *p; // 5



   int a;
   int *w = &a;
   *w = 20; // a = 5


   int a, b;
   int &ref = a;
   ref = 10; // a = 10
   b = ref; // b = 10
}