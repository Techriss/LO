#include <iostream>
using namespace std;
int N = 100;

void merge(int p, int s, int k, int A[]) {
    int i = p, j = s+1, m = p;
    int B[N];
    
    while (i <= s && j <= k) B[m++] = A[i] < A[j] ? A[i++] : A[j++];
    while (i <= s) B[m++] = A[i++];
    while (j <= k) B[m++] = A[j++];

    for (i = p; i <= k; i++) A[i] = B[i];
}

void merge2(int p, int s, int k, int A[]) {
    for (int i = p; i <= s; i++) {
        if (A[s+1] < A[i]) {

            int pom = A[i];
            A[i] = A[s+1];
            int j = s+2;

            while (j <= k && A[j] < pom) {
                A[j-1] = A[j];
                j++;
            }

            A[j-1] = pom;
        }
    }
}


void mergesort(int A[], int p, int k) {
    if (p >= k) return;
    int s = (p+k)/2;
    mergesort(A, p, s);
    mergesort(A, s+1, k);
    merge(p, s, k, A);
}

void quicksort(int A[], int p, int k) {
    int i = p, j = k, m = A[(p + k)/2];
    while (i < j) {
        while (A[i] < m) i++;
        while (A[j] > m) j--;
        if (i <= j) swap(A[i++], A[j--]);
    }

    if (p < j) quicksort(A, p, j);
    if (i < k) quicksort(A, i, k);
}

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        swap(arr[min_index], arr[i]);
    }
}

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = i;
        while (curr > 0 && arr[curr] < arr[curr-1]) {
            swap(arr[curr], arr[curr-1]);
            curr--;
        }
    }
}

int main() {
    int arr[] = {1, 6, 5, 8, 2, 9, 5, 7, 57, 90, 21, 0, -5, -29, -40, -50, 100, 10000};
    mergesort(arr, 0, size(arr)-1);
    for (auto &x : arr) cout << x << endl;
}