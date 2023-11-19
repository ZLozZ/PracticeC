#include "stdio.h"

int binary(int n){
    if(n>0)
        return (n%2)*10 + binary(n/2)*10;
    return n;
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    int result = binary(n)/10;
    printf("Result: %d", result);
    return 0;
}