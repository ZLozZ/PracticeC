#include "stdio.h"

//De qui duoi la dang dac biet cua de qui tuyen tinh nhung no co cau truc re nhanh

int gcd(int m, int n){
    if(m<n) return gcd(n, m);
    int r = m%n;
    if(r==0) return n;
    else return gcd(n, r);
}


int main(){
    int m, n;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    int result = gcd(m, n);
    printf("Result: %d", result);
    return 0;
}