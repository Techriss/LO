#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <ctime>
using namespace std;

int lider(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        int c = 0;
        for (int j = 0; j < v.size(); i++)
            if (v[i] == v[j]) c++;

        if (c > v.size()/2) return v[i];
    }
}


// int lider(vector<int> v) {
//     auto s = unordered_set(v.begin(), v.end());
//     for (auto)
// }

int lider2(vector<int> v) {
    sort(v.begin(), v.end());
    int c = 0;
    int candidate = v[v.size()/2];

    for (int i = 0; i < v.size(); i++)
        if (v[i] == candidate) c++;

    if (c > v.size()/2) return candidate;
    else return -1;
}


void losuj(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = rand() % (2014 - 1985 + 1) + 1985;
    }
}   

// [a, b] = rand() % (b-a+1)+a;



void losuj2(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        int r = rand() % (2014 - 1985 + 1) + 1985;
        if (rand() % 2 == 0) v[i] = r;
    }
}   


int main() {
    srand(time(NULL));
    vector<int> v(10);
    losuj2(v);
    for (auto x : v) cout << x << endl;
}


int lider3(vector<int> v) {
    int c = 0; 
    int candidate; 

    for (int i = 0; i < v.size(); i++) {
        if (c == 0) { candidate = v[i]; c = 1; }
        else if (candidate == v[i]) c++;
        else c--;
    }

    if (c == 0) return -1;  
    c = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == candidate) c++;
    }

    if (c > v.size()/2) return candidate;
    else return -1;
}