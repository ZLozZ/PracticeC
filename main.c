#include "stdio.h"

//C1
int binarySearch(int *arr, int n, int x) {
    int left = 0, right = n - 1;
    int mid;
    do {
        mid = (left + right) / 2;
        if (x == arr[mid])
            return mid;
        else if (x < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    } while (left <= right);
    return -1;
}

//C2
int bSearch(int *arr, int x, int left, int right) {
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (x == arr[mid])
        return mid;
    if (x < arr[mid])
        return bSearch(arr, x, left, mid - 1);
    return bSearch(arr, x, mid + 1, right);
}

int main() {
    int arr[] = {1, 5, 15, 19, 25, 27, 29, 31, 33, 45, 55, 88, 100};
    printf("Result: %d", bSearch(arr, 100, 0, 13));
    return 0;
}