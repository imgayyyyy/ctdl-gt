//
// Created by DELL on 28/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j =i -1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
int main(void) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("So phan tu khac hop le.\n");
        return 1;
    }
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho khong thanh cong!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang chua sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);

    }
    // sap xep insertion sort

    printf("\n");
    insertionSort(arr, n);
    printf("Mang da duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);

    }
    free(arr);
    return 0;
}
