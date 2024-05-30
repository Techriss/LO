// najwieksza roznica

// bez sortowania
int max(vector<int> a) {
    int maxv = a[0], minv = a[0];
    for (auto &x : a) maxv = max(x, maxv), minv = min(x, minv);
    return maxv-minv;
}

// z sortowaniem
int max(vector<int> a) {
    sort(a.begin(), a.end());
    return a[a.size()-1] - a[0];
}

int bubble_count(vector<int> a) {
    int c = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = j+1; j < a.size(); j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
                ++c;
            }

        }
    }
}

int selectionsort {
    ...
}

