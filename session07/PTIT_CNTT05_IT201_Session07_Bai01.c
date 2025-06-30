//
// Created by DELL on 28/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *array, int length){
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Nhap so luong phan tu 1-999: ");
    scanf("%d", &n);
    if(n <=0 || n>=1000){
        printf("Khong hop le!\n");
        return 1;
    }
    int *arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Khong the cap phat!\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi sap xep: \n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    // sap xep
    bubble_sort(arr, n);
    printf("Mang sau khi sap xep: \n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}