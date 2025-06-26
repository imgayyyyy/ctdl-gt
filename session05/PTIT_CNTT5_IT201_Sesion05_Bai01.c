//
// Created by DELL on 26/06/2025.
//
#include <stdio.h>
int countDown(int n,int x) {

    printf("%d\n", x);
    if (x>=n) {
        return 1;
    }

    return countDown(n,x+1);
}
int main() {
    int n;
    printf("nhap n");
    scanf("%d", &n);
    countDown(n,1);

}