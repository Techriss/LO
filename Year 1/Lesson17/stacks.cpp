#include <stack>
#include <iostream>
using namespace std;

#define N 16

void hanoi(int n, stack<int> &a, stack<int> &b, stack<int> &c, int &moves)
{
    if (n == 0) return;
    hanoi(n-1, a, c, b, moves);

    int x = a.top();
    a.pop();
    b.push(x);

    ++moves;

    hanoi(n-1, c, b, a, moves);
}

void printstacks(stack<int> a, stack<int> b, stack<int> c)
{
    cout << "A: ";
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }

    cout << "\nB: ";
    while (!b.empty())
    {
        cout << b.top() << " ";
        b.pop();
    }

    cout << "\nC: ";
    while (!c.empty())
    {
        cout << c.top() << " ";
        c.pop();
    }

    cout << endl << endl;
}

int main()
{
    int moves = 0;

    stack<int> a;
    stack<int> b;
    stack<int> c;

    int n = N;
    while (n --> 0)
    {
        a.push(n);
    }

    cout << "before: " << endl;
    printstacks(a, b, c);

    cout << "after: " << endl;
    hanoi(N, a, b, c, moves);
    printstacks(a, b, c);

    cout << "-- completed with " << moves << " moves --";
}