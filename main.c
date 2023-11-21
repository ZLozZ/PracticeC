#include "stdio.h"

void insertionSort(int *arr, int n) {
    int pos = 0;
    int x;
    for (int i = 0; i < n; i++) {
        x = arr[i];
        for (pos = i; (pos > 0) && (arr[pos - 1] > x); pos--) {
            arr[pos] = arr[pos - 1];
        }
        arr[pos] = x;
    }
}

void xuatMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[] = {10, 8, 20, 81, 25};
    insertionSort(arr, 5);
    xuatMang(arr, 5);
    return 0;
}