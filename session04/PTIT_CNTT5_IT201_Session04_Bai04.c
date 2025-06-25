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
    int x;
    printf("nhap gia tri can tim");
    scanf("%d",&x);
    int y=-1;
    for (int i=0;i<n;i++) {
        if (arr[i]==x) {
            y=i;
        }
    }
    if (y!=-1) {
        printf("%d",y);
    }else {
        printf("khong tim thay phan tu");
    }


    return 0;
}