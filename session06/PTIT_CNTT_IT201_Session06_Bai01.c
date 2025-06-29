//
// Created by DELL on 27/06/2025.
//
#include <stdio.h>
int nhiPhan(int n) {
    if (n<=0) {
        return 1;
    }
    // return nhiPhan(n/2);
    nhiPhan(n / 2);
    printf("%d", n % 2);
    return 1;
}
int main() {
    int n;
    printf("nhap : ");
    scanf("%d", &n);
    nhiPhan(n);
    return 0;
}