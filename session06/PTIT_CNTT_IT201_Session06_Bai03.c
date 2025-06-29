//
// Created by DELL on 27/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int sum(int n) {
    if (n==0) return 0;
    // x += sum(n, n % 10);
    // sum(n / 10, x);
    // return 1;
    return (n%10)+sum(n/10);
}
int main() {
    int n;
    int x=0;
    printf("nhap n");
    scanf("%d", &n);
    // sum(n,x);
    int result = sum(n);
    printf("%d", result);
}