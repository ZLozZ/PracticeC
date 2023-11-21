#include "stdio.h"

void bubbleSort(int *arr, int n){
    int i, j;
    for(i = 0; i< n-1; i++){
        for(j = n-1; j>i;j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

void xuatMang(int *arr, int n){
    for(int i = 0;i<n;i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int arr[] = {100,3,60,35,2};
    bubbleSort(arr,5);
    xuatMang(arr, 5);
    return 0;
}