#include "stdio.h"


void input(int *arr, int *n) {
    printf("N = ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
}

void output(int *arr, int n) {
    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void splitArray(int *arr, int *arrEven, int *arrOdd, int n) {
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arrEven[j] = arr[i];
            j++;
        } else {
            arrOdd[k] = arr[i];
            k++;
        }
    }
    printf("Even Array: ");
    for (int a = 0; a < j; a++) {
        printf("%d  ", arrEven[a]);
    }
    printf("\n");
    printf("Odd Array: ");
    for (int b = 0; b < k; b++) {
        printf("%d  ", arrOdd[b]);
    }
}

void merge(int *arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int n, arr[100];
    int evenArray[100], oddArray[100];
    input(arr, &n);
    mergeSort(arr, 0, n-1);
    output(arr, n);
//    splitArray(arr, evenArray, oddArray, n);
    return 0;
}