#include <stdio.h>
#include <stdlib.h>
void quickSort(int *arr, int left, int right) {
    if (left >= right) return;
    int pivot = arr[right];
    int i =left-1;
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    int tmp = arr[i+1];
    arr[i+1] = arr[right];
    arr[right] = tmp;
    quickSort(arr, left, i);
    quickSort(arr, i+1, right);
}
int main(void) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Cap phat bo nho that bai\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang chua duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    quickSort(arr, 0, n-1);
    printf("Mang sau khi duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);

    }
    free(arr);
    return 0;
}
