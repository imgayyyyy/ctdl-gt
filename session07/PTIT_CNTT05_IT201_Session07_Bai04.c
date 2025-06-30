//
// Created by DELL on 28/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void sort(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void) {
    int n;
    char *arr;
    printf("Nhap so ky tu (toi da 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So ky tu khong hop le.\n");
        return 1;
    }

    // Dọn \n sau scanf
    while (getchar() != '\n');

    // Cấp phát mảng ký tự
    arr = (char *)malloc(n * sizeof(char));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    // Nhập từng ký tự
    printf("Nhap %d ky tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Ky tu thu %d: ", i + 1);
        scanf(" %c", &arr[i]);  // có khoảng trắng để bỏ qua newline
    }
    printf("Mang truoc khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
    // sap xep
    sort(arr, n);
    sort(arr, n);

    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    free(arr);
    return 0;
}