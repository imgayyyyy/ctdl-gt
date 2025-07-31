//
// Created by DELL on 31/07/2025.
//
#include<stdio.h>
#include <stdlib.h>

int main() {

    int choice;
    while(1) {
        printf("________folder manager________");
        printf("1.tao thu muc goc");
        printf("2.them thu muc con");
        printf("3.in cau truc thu muc");
        printf("4.tim kiem thu muc theo ten");
        printf("5.tinh chieu cao he thong thu muc");
        printf("6.in duong dan tu thu muc goc->thu muc con");
        printf("7.thoat");
        printf("nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                printf("thoat chuong trinh");
                return 0;
            default:
                pritnf("lua chon khong hop le");
                break;
        }
    }
}

