#include "stdio.h"

void interChangeSort(int *arr, int n){
    int i, j;
    for(i = 0; i<n-1;i++){
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void xuatMang(int *arr, int n){
    for(int i = 0; i<n;i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int arr[] = {100, 3, 60, 35,2};
    interChangeSort(arr,5);
    xuatMang(arr,5);
    return 0;
}