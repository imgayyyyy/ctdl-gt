//
// Created by DELL on 24/07/2025.
//
#include <stdio.h>

#define MAX 100

int main() {
    int n, v;
    int edgeList[MAX][2];
    int k;
    int count = 0;

    printf("Nhap so dinh va so canh: ");
    scanf("%d %d", &n, &v);

    printf("Nhap cac canh:\n");
    for (int i = 0; i < v; i++) {
        scanf("%d %d", &edgeList[i][0], &edgeList[i][1]);
    }

    printf("Nhap dinh k muon kiem tra: ");
    scanf("%d", &k);

    // Đếm các đỉnh kề với k
    for (int i = 0; i < v; i++) {
        if (edgeList[i][0] == k || edgeList[i][1] == k) {
            count++;
        }
    }

    printf("So dinh ke voi %d la: %d\n", k, count);

    return 0;
}