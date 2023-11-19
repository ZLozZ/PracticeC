#include "stdio.h"

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void print_permutations(int arr[], int n, int i) {
    int j, swap;
    print_array(arr, n);
    for (j = i + 1; j < n; j++) {
        if (arr[i] > arr[j]) {
            swap = arr[i];
            arr[i] = arr[j];
            arr[j] = swap;
        }
        print_permutations(arr, n, i + 1);
    }
}

void nhap_chuoi(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
}

int main() {
    int arr[100], n;
    printf("n = ");
    scanf("%d", &n);
    nhap_chuoi(arr, n);

    print_permutations(arr, n, 0);

    return 0;
}