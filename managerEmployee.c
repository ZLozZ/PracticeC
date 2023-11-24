#include <string.h>
#include "stdio.h"

typedef struct {
    int code;
    char name[40];
    int old;
}employee;

void inputEmployee(employee *arr, int *n){
    printf("Quantity: ");
    scanf("%d", n);
    fflush(stdin);
    for (int i = 0; i < *n; i++) {
        printf("Nhan vien thu %d: \n", i);
        printf("Nhap ma nhan vien: ");
        scanf("%d", &arr[i].code);
        fflush(stdin);
        printf("Nhap ten nhan vien: ");
        fgets( &arr[i].name, sizeof(arr[i].name), stdin);
        printf("Nhap tuoi nhan vien: ");
        scanf("%d", &arr[i].old);
    }
}

void outputEmployee(employee *arr, int n){
    printf("%10s %15s %10s\n","Code", "Name", "Old");
    for (int i = 0; i < n; i++) {
        printf("%10d %20s %10d\n", arr[i].code, arr[i].name, arr[i].old);
    }
}

void oldSort(employee *arr, int n){
    for(int i = 0; i < n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i].old > arr[j].old){
                employee temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void nameSort(employee *arr, int n){
    for(int i = 0; i < n-1;i++){
        for(int j = i+1;j<n;j++){
            if(strcmp(arr[i].name, arr[j].name)>0){
                employee temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    employee arr[] = {1,"Hoa", 23,  2, "Minh", 12, 3, "Ha", 36};
    int n;
//    inputEmployee(arr, &n);
//    outputEmployee(arr, 3);
//    oldSort(arr,3);
    nameSort(arr,3);
    outputEmployee(arr, 3);
    return 0;
}