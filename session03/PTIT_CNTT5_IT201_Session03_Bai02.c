#include<stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap kich thuoc mang");
    scanf("%d", &n);
    if (n<=0) {
        printf("kich thuoc mang khong hop le");
        return 0;
    }
    int *arr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nmang da duoc nhap la :");
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);
    }
    int max=arr[0];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                max = arr[i];
            }
        }
    }
    printf("\nmax : %d",max);

    free(arr);
    printf("\ngiai phong bo nho thanh cong");
    return 0;
}
