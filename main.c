#include "stdio.h"

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("result: %d", result);
    return 0;
}