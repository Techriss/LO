// rekurencyjne algorytmy

#include <iostream>
#include <string>
using namespace std;



// najwiekszy wspolny dzielnik
int nwd(int x, int y)
{
    if (y == 0) return x;
    return nwd(y, x % y);
}


// odwracanie listy
struct Node 
{
    int data;
    struct Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node* reverse(Node* head)
{
    if (head == NULL || head->next == NULL) return head;

    Node* rest = reverse(head->next);
    head->next->next = head;

    head->next = NULL;
    return rest;
}


// odwracanie ciagu
string reverse(string s)
{
    if (s.size() == 1) return s;
    return reverse(s.substr(1, s.size() - 1)) + s[0];
}