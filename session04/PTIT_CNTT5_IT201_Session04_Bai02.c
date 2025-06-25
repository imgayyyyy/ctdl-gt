//
// Created by DELL on 24/06/2025.
//
#include<Stdio.h>
int main() {
    int n;
    printf("nhap kich thuoc mang");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("nhap phan tu arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    int max=arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if (arr[i]==max) {
            printf("%d ",i);
            break;
        }
    }

    return 0;
}