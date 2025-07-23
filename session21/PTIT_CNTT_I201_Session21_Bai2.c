//
// Created by DELL on 23/07/2025.
//
#include<Stdio.h>
int MATRIX[4][4];
void matrix() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            MATRIX[i][j] = 0;
        }
    }
}


void printfMatrix() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
}

void add(int U, int V) {
    MATRIX[U][V] = 1;
    MATRIX[V][U] = 1;
}

int main() {
    add(0,1);
    add(0,2);
    add(1,2);
    add(2,3);
    printfMatrix();
}