#include <iostream>
#include <vector>
using namespace std;

int nspnm(int A[]) {
    int maxl = 1, currl = 1, maks_pocz=0, akt_pocz=0, i;
    for (i = 1; i < a.size(); i++) {
        if (a[i] >= a[i-1]) {
            currl++;
            if (currl > maxl) {
                maxl = currl;
                maks_pocz = akt_pocz;
            }
        }

        else {
            currl = 1;
            akt_pocz = i;
        }
    }

    return maks_pocz;
}


int maxsuma(vector<int> arr) {
    int maxs = 0;
    for (int i = 0; i < arr.size(); i++) {
        int currs = 0;
        for (int j = i; j < arr.size(); j++) {
            currs += arr[j];
            maxs = max(maxs, currs);
        }
    }

    return maxs;
}

int maxsuma3(vector<int> arr) {
    int maxs = 0, currs = 0;
    for (int i = 0; i < arr.size(); i++) {
        currs = (currs + arr[i] > 0) ? currs + arr[i] : 0;
        maxs = max(maxs, currs);
    }

    return maxs;
}


int indexandsum(vector<int> arr) {
    int maxs = 0, currs = 0, maxstart = 0, currstart = 0;
    for (int i = 0; i < arr.size(); i++) {
        currs += arr[i];
        if (currs > maxs)
    }
}


bool sprawdz(string s1, string s2) {
    int dl = s1.size();
    if (dl != s2.size()) return false;

    int t1[2] = {0, 0}, t2[2] = {0, 0};
    for (int i = 0; i < dl; i++) {
        if (s1[i] == 'X') t1[0]++;
        else t1[1]++;

        if (s2[i] == 'X') t2[0]++;
        else t2[1]++;
    }

    for (int i = 0; i < 2; i++)
        if (t1[i] != t2[i]) return false;
}