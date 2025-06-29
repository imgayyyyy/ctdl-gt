//
// Created by DELL on 27/06/2025.
//
#include <stdio.h>

void find(int arr[], int i, int n, int *max, int *min) {
    if (i >= n) return;

    if (arr[i] > *max) *max = arr[i];
    if (arr[i] < *min) *min = arr[i];

    find(arr, i + 1, n, max, min);
}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    find(arr, 0, n, &max, &min);

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    return 0;
}