#include <iostream>
#include <vector>
#include <queue>
using namespace std;


typedef vector<vector<int>> tgraf;
typedef vector<vector<edge>> tgraf2;

struct edge {
    int w2, waga;
};


void bfs(int w1, tgraf &g) {
    int w2;
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
            w2 = x;
            if (!seen[w2]) {
                v.push(w2);
                seen[w2] = true;
            }
        }
    }
}


void dijkstra(tgraf2 &g, int start, vector<int> &koszt) {
    edge e;
    int i, j, k, w1;
    vector<bool> seen(g.size(), false);
    koszt[start] = 0;

    for (i = 0; i < g.size() - 1; i++) {
        k = 0; 
        while (seen[k]) k++, w1 = k;
        for (j = k+1; j < g.size(); j++) {
            if (!seen[j] && koszt[j] < koszt[w1]) w1 = j;
        }

        seen[w1] = true;
        for (j = 0; j < g[w1].size(); j++) {
            e = g[w1][j];
            if (!seen[e.w2] && koszt[w1] + e.waga < koszt[e.w2])
            koszt[e.w2] = koszt[w1] + e.waga;
        }
    }
}