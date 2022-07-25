#include <iostream>
using namespace std;

int main()
{
    int points, grade;

    cout << "Podaj liczbe punktów: ";
    cin >> points;

    if (points >= 0 && points <= 50)
    {
        grade = 1;
    }
    else if (points > 50 && points <= 60)
    {
        grade = 2;
    }
    else if (points > 60 && points <= 75)
    {
        grade = 3;
    }
    else if (points > 75 && points <= 90)
    {
        grade = 4;
    }
    else if (points > 90 && points <= 99)
    {
        grade = 5;
    }
    else if (points == 100)
    {
        grade = 6;
    }

    cout << points << " punktów daje ocene " << grade << endl;


    return 0;
}