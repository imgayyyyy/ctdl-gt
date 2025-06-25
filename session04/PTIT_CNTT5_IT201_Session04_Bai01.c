//
// Created by DELL on 24/06/2025.
//
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("nhap kich thuoc mang");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("nhap phan tu arr[%d]:",i);
        scanf("%d", &arr[i]);
    }
    printf("nhap phan tu can tim: ");
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if (arr[i]==x) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}