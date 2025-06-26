//
// Created by DELL on 26/06/2025.
//
#include<stdio.h>
int sum(int a, int b) {
    if (a>b) {
        return 0;
    }
    return a+sum(a+1,b);
}
int main() {
    int first;
    int second;
    printf("nhap so dau tien");
    scanf("%d", &first);
    printf("nhap so thu hai");
    scanf("%d", &second);
    if (first > second) {
        printf("khong hop le");
        return 0;
    }

    // sum(first, second);


    int result = sum(first, second);
    printf("%d",result);
}