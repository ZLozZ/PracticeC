#include "stdio.h"
#include "stdbool.h"

bool isEven(int n);

bool isOdd(int n);

bool isEven(int n) {
    if (n == 0)
        return 1;
    else
        return isOdd(n - 1);
}

bool isOdd(int n) {
    return !isEven(n);
}

int main() {
    int n1 = 9;
    bool kq = isEven(n1);
    printf("%d", kq);
    return 0;
}