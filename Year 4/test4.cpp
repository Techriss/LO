#include <iostream>
#include <list>
#include <vector>
#include <fstream>
#include <queue>
#include <unordered_set>
using namespace std;

int flawiusz(int n, int k) {
    list<int> l;
    for (int i = 1; i <= n; i++) l.push_back(i);

    list<int>::iterator it = l.begin();

    while (l.size() > 1) {
        for (int i = 0; i < k-1; i++)
            if (++it == l.end()) 
                it = l.begin();

        l.erase(it++);
        if (it == l.end()) it = l.begin();
    }

    return *it;
}


void bucketsort(list<string> &l) {
    const int mdl = 32;
    const string abc = "abcdefghijklmnopqrstuvwxyz";
    vector<queue<string>> b(36);
    auto it = l.begin();
    string s;

    for (int i = mdl - 1; i >= 0; i--) {
        it = l.begin();
        while (it != l.end()) {
            s = *it;
            if (s.size() > i) {
                it = l.erase(it);
                int j = abc.find(s[i]);
                b[j].push(s);
            }
            else it++;
        }

        for (int j = 0; j < 36; j++) {
            while (!b[j].empty()) {
                l.push_back(b[j].front());
                b[j].pop();
            }
        }
    }
}


bool dfs(vector<vector<int>> &adj_list, int w1, unordered_set<int> &seen) {
    if (seen.size() == adj_list.size()-1) return true;
    if (seen.find(w1) != seen.end()) return false;
    seen.insert(w1);

    for (auto x : adj_list[w1]) {
        dfs(adj_list, x, seen);
    }
}



bool connected() {
    ifstream in("graf-2-txt.txt");
    vector<vector<int>> adj_list;
    string s;
    int n = 0;

    getline(in, s);
    adj_list.resize(s[0], vector<int>());

    while (getline(in, s)) {
        adj_list[s[0]].push_back(s[2]);
        adj_list[s[2]].push_back(s[0]);
    }

    cout << "podaj w1: " << endl;
    int w1; 
    cin >> w1;

    unordered_set<int> seen;
    return dfs(adj_list, w1, seen);
}



int main() {
    cout << flawiusz(10, 3) << endl;

    list<string> l;
    l.push_back("wir");
    l.push_back("wiatr");
    l.push_back("wiksa");
    l.push_back("bor");
    l.push_back("borwerweaergwerg");
    l.push_back("werweaergwerg");
    l.push_back("aaaaaaaa");

    bucketsort(l);
    for (auto x : l) cout << x << endl;

    cout << connected() << endl;
}