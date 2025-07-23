#include<stdio.h>
int MATRIX[3][3];
void matrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            MATRIX[i][j]=0;
        }
    }
}
void add(int U, int V) {
    MATRIX[U][V] = 1;
    MATRIX[V][U] = 1;
}
void printfMatrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int u,v;
    printf("firstNumber: ");
    scanf("%d", &u);
    printf("secondNumber: ");
    scanf("%d", &v);
    matrix();
    add(u,v);
    printfMatrix();
}