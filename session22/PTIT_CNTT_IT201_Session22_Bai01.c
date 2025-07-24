#include<stdio.h>
#define MAX 100
int n;
int MATRIX[MAX][MAX];
void matrix() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            MATRIX[i][j]=0;
        }
    }
}
void add(int U, int V) {
    MATRIX[U][V] = 1;
    MATRIX[V][U] = 1;
}
void printfMatrix() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
}
int main() {
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    matrix();
    add(0,1);
    add(0,2);
    add(1,2);
    add(3,2);
    add(1,3);
    add(3,4);

    printfMatrix();
}