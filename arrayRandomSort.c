#include <stdlib.h>
#include <stdbool.h>
#include "stdio.h"

int random(int minN, int maxN) {
    return minN + rand() % (maxN + 1 - minN);
}

void input(int *arr, int *n) {
    printf("N = ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        arr[i] = random(-100, 100);
    }
}

void output(int *arr, int n) {
    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
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

bool linearSearch(int *arr, int n) {
    int number;
    printf("Number Search: ");
    scanf("%d", &number);
    int i;
    for (i = 0; (i < n) && (arr[i] != number); i++);
    if (i == n)
        return false;
    return true;
}

bool binarySearch(int *arr, int l, int r, int number) {
    if (l > r)
        return false;
    int mid = (l + r) / 2;
    if (arr[mid] == number)
        return true;
    if (number < arr[mid])
        return binarySearch(arr, l, mid - 1, number);
    return binarySearch(arr, mid + 1, r, number);
}


int main() {
    int n, arr[100];
    input(arr, &n);
    output(arr, n);
    if (linearSearch(arr, n))
        printf("Linear Search OK\n");
    else
        printf("Linear Search Not found\n");

    mergeSort(arr, 0, n - 1);
    output(arr, n);

    int number;
    printf("Number binary Search: ");
    scanf("%d", &number);

    if (binarySearch(arr, 0, n - 1, number))
        printf("Binary Search OK\n");
    else
        printf("Binary Search Not found\n");
    return 0;
}