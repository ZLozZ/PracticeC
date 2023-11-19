#include "stdio.h"

int combination(int n, int k) {
    if (k == 0 || n == k)
        return 1;
    return combination(n - 1, k) + combination(n - 1, k - 1);
}

int main() {
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    int result = combination(n, k);
    printf("Result: %d", result);
    return 0;
}