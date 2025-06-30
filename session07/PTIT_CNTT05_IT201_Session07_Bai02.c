//
// Created by DELL on 28/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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
    // sap xep selectionSort
    selectionSort(arr, n);
    printf('\n');
    printf("Mang chua sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);

    }
    free(arr);
    return 0;
}