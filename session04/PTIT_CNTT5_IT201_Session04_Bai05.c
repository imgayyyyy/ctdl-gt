//
// Created by DELL on 24/06/2025.
//
#include<stdio.h>
int main() {
    int n;
    printf("nhap kich thuoc mang");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("nhap phan tu arr[%d]:",i);
        scanf("%d", &arr[i]);
    }
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return 0;
}