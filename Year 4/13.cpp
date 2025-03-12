#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <fstream>
using namespace std;


// adj list 
typedef vector<vector<int>> tgraf;
// typedef vector<vector<edge>> tgraf2;

struct edge {
    int w2, waga;
};


void bfs(int w1, tgraf &g) {
    vector<bool> seen;
    seen.resize(g.size(), false);

    queue<int> v;
    v.push(w1);
    seen[w1] = true;

    while (!v.empty()) {
        w1 = v.front();
        v.pop();
        cout << "odwiedzone: " << w1 << endl;

        for (auto x : g[w1]) {
            if (!seen[x]) {
                v.push(x);
                seen[x] = true;
            }
        }
    }
}

void dfs(int w1, tgraf &g) {
    vector<bool> seen;
    seen.resize(g.size(), false);

    stack<int> v;
    v.push(w1);
    seen[w1] = true;

    while (!v.empty()) {
        w1 = v.top();
        v.pop();
        cout << "odwiedzone: " << w1 << endl;

        for (auto x : g[w1]) {
            if (!seen[x]) {
                v.push(x);
                seen[x] = true;
            }
        }
    }
}

void dfs(int w1, tgraf &g, vector<bool> &seen) {
    if (seen[w1]) return;

    seen[w1] = true;
    cout << "odwiedzone: " << w1 << endl;

    for (auto x : g[w1])
        dfs(x, g, seen);
}


// void dijkstra(tgraf2 &g, int start, vector<int> &koszt) {
//     edge e;
//     int i, j, k, w1;
//     vector<bool> seen(g.size(), false);
//     koszt[start] = 0;

//     for (i = 0; i < g.size() - 1; i++) {
//         k = 0; 
//         while (seen[k]) k++, w1 = k;
//         for (j = k+1; j < g.size(); j++) {
//             if (!seen[j] && koszt[j] < koszt[w1]) w1 = j;
//         }

//         seen[w1] = true;
//         for (j = 0; j < g[w1].size(); j++) {
//             e = g[w1][j];
//             if (!seen[e.w2] && koszt[w1] + e.waga < koszt[e.w2])
//             koszt[e.w2] = koszt[w1] + e.waga;
//         }
//     }
// }

void load(tgraf &g) {
    ifstream we("graf.txt");
    string s;
    while (getline(we, s)) {
        g[int(s[0])-48].push_back(int(s[2])-48);
        g[int(s[2])-48].push_back(int(s[0])-48);
    }

    we.close();
}


int main() {
    tgraf g;
    g.resize(10, vector<int>());
    load(g);

    cout << "bfs" << endl;
    bfs(1, g);
    cout << "dfs" << endl;
    dfs(1, g);

    vector<bool> seen;
    seen.resize(10, false);

    cout << "dfs" << endl;
    dfs(1, g, seen);
}