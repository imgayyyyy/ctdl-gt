//
// Created by DELL on 26/06/2025.
//
#include <stdio.h>
int sum(int n,int x) {
    if (x>n) {
        return 0;
    }
    return x+sum(n,x+1);
}
int main() {
    int n;
    printf("nhap n : ");
    scanf("%d", &n);
    sum(n,1);
    int result = sum(n, 1);
    printf("Tong tu 1 den %d la: %d\n", n, result);
}
