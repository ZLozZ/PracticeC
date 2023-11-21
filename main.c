#include "stdio.h"

void quickSort(int *arr, int left, int right) {
    if (left >= right) return;
    int pivot = arr[(int) (left + right) / 2];
    int i = left, j = right;
    do {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    quickSort(arr, left, j);
    quickSort(arr, i, right);
}

void xuatMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[] = {29, 17, 40, 63, 54};
    quickSort(arr, 0, 5);
    xuatMang(arr, 5);
    return 0;
}