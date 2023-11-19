#include "stdio.h"

int ackerman(int m, int n){
    if(m==0) return n+1;
    else if(n==0)
        return ackerman(m-1,1);
    else
        return ackerman(m-1, ackerman(m,n-1));
}

int main(){
    int result = ackerman(1,1);
    printf("Result: %d", result);
    return 0;
}