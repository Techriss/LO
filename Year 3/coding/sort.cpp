#include <iostream>
#include <vector>
using namespace std;

// bubble sort
void bubblesort(vector<int> a) {
    for (int i = 1; i < a.size(); j++)
        for (int j = 0; j < a.size()-i; j++)
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
}


void qs(int arr[], int l, int r) {
    if (l >= r) return;
    int i = l, j = r, pivot = arr[l + rand() % (r - l)];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) swap(arr[i++], arr[j--]);
    }

    qs(arr, l, j);
    qs(arr, i, r);
}


void insertionsort(vector<int> a) {
    for (int i = 1; i < a.size(); i++) {
        int tmp = a[i];
        int j = i-1;

        while (j >= 0 && a[j] > tmp) {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = tmp;
    }
}

void insertionsort2(vector<int> a) {
    int i, j;
    for (i = 2; i <= a.size(); i++) {
        a[0] = a[i];
        j = i-1;
        
        while (a[j] > a[0]) {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = a[0];
    }
}