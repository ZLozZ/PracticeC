#include "stdio.h"

//C1
int LinearSearch(int *arr, int n, int x){
    int i;
    for(i = 0; (i<n) && (arr[i] != x); i++);
    if(i == n)
        return -1;
    return i;
}

//C2
int lSeach(int *arr, int n, int x){
    for(int i = 0; i< n;i++){
        if(arr[i] ==x)
            return i;
        return -1;
    }
}

int main(){
    int arr[] = {25, 20, 9, 5, 7, 4, 13, 17};
    printf("Result: %d", LinearSearch(arr, 10, 100));
    return 0;
}