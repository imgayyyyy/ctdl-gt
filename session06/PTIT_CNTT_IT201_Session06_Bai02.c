//
// Created by DELL on 27/06/2025.
//
#include <stdio.h>
//in xuooi
// int fibonacci(int n,int index, int number1, int number2) {
//     if (index>n) return 0;
//     printf("%d",number1);
//     return fibonacci(n,index+1,number2,number1+number2);
// }
// int main() {
//     int n;
//     int number1 =0;
//     int number2=1;
//     printf("nhap so luong so fibonacci dau tien : ");
//     scanf("%d",&n);
//     fibonacci(n,0,number1,number2);
//     return 0;
// }

int fibonacci(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n-1; i >= 0; i--) {
        printf("%d", fibonacci(i));
    }
    return 0;
}
// in nguoc