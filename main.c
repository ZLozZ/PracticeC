#include "stdio.h"

int feb(int n){
    if(n<=2) return 1;
    return feb(n-1)+feb(n-2);
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);

    int result = feb(n);
    printf("Result: %d", result);
    return 0;
}