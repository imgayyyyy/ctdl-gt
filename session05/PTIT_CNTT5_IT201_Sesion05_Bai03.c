//
// Created by DELL on 26/06/2025.
//
#include<Stdio.h>
int fac(int n,int x) {
    if (x>n) {
        return 1;
    }
    return x*fac(n,x+1);
}
int main() {
    int n;
    printf("nhap n:");
    scanf("%d", &n);
    fac(n,1);
    int result = fac(n,1);
    printf("giai thua %d: %d\n", n, result);
}