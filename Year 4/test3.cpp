#include <iostream>
#include <vector>
using namespace std;

void sort1(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            if (v[i] % 10 > v[j] % 10) swap(v[i], v[j]);
        }
    }
}


void sort2(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            if (v[i] < v[j]) swap(v[i], v[j]);
        }
    }
}



void qs(vector<int> &v, int l, int r) {
    int i = l, j = r, pivot = v[(l+r)/2];
    while (i < j) {
        while (v[i] < pivot) i++;
        while (v[j] > pivot) j--;
        if (i <= j) swap(v[i++], v[j--]);
    }

    if (l < j) qs(v, l, j);
    if (i < r) qs(v, i, r);
}



void merge(vector<int> &v, int l, int m, int r) {
    int i = l, j = m+1, k = l;
    vector<int> aux(v.size());

    while (i <= m && j <= r) aux[k++] = v[i] < v[j] ? v[i++] : v[j++];
    while (i <= m) aux[k++] = v[i++];
    while (j <= r) aux[k++] = v[j++];

    for (i = l; i <= r; i++) v[i] = aux[i];
}

void mergesort(vector<int> &v, int l, int r) {
    if (l >= r) return;
    int m = (l+r)/2;
    mergesort(v, l, m);
    mergesort(v, m+1, r);
    merge(v, l, m, r);
}



int main() {
    vector<int> v = {1, 435, 67, 45, 34, 5345, 647, 47, 3456, 436, 5345, 45, 34, 5234, 52345, 123, 45,6};
    mergesort(v, 0, v.size()-1);
    for (auto &x : v) cout << x << " ";
}