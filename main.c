#include "stdio.h"

void selectionSort(int *arr, int n) {
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j])
                min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void xuatMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[] = {100, 3, 60, 35, 2};
    selectionSort(arr, 5);
    xuatMang(arr, 5);
    return 0;
}