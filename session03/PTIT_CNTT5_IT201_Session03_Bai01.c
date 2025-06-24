#include<stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("mang da duoc nhap la :");
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);
    }
    free(arr);
    printf("giai phong bo nho thanh cong");
    return 0;
}
