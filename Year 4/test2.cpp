#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;

// 1
bool anagram(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

// lub: policzyc litery w każdym słowie i sprawdzić czy liczba każdej litery jest w obu słowach taka sama

// 2
int lider(vector<int> v) {
    sort(v.begin(), v.end());
    int cand = v.size()/2;

    int c = 0;
    for (auto x : v) {
        if (x == v[cand]) c++;
    }

    if (c > v.size()/2) return cand;
    else return -1;
}


// 3 
int idol(vector<vector<bool>> v) {
    int i;
    bool idol = false;

    for (i = 0; i < v.size() && !idol; i++) {
        idol = true;

        for (int j = 0; j < v.size(); j++) {
            if (i == j) continue;
            if (v[i][j]) idol = false;
        }
    }

    if (!idol) return -1;
    idol = false;

    for (int j = 0; i < v.size(); j++) {
        if (i == j) continue;
        if (!v[j][i]) return -1;
    }

    return i;
}


// 4
void losuj(int n) {
    if (n <= 0) return;

    int v[n][n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            v[i][j] = rand();
            cout << v[i][j] << " ";
        }

        cout << endl;
    }

    int max = v[0][0];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            max = std::max(max, v[i][j]);

    cout << "maksimum to " << max << endl;
}



int main() {
    losuj(10);
}

