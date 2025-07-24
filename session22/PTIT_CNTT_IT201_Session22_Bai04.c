//
// Created by DELL on 24/07/2025.
//
#include <stdio.h>

int main() {
    int n = 5;
    int a[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 1},
        {0, 0, 0, 1, 0}
    };

    int count = 0;

    // Đếm tổng số 1 rồi chia đôi
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1)
                count++;

    printf("%d\n", count / 2);  // Mỗi cạnh được đếm 2 lần

    return 0;
}