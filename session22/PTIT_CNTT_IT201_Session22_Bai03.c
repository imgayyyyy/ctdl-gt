//
// Created by DELL on 24/07/2025.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* graph[MAX];

Node* createNode(int v) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(int u, int v) {
    Node* newNode = createNode(v);
    newNode->next = graph[u];
    graph[u] = newNode;
}

void printGraph(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        Node* temp = graph[i];
        while (temp != NULL) {
            printf(" -> %d", temp->vertex);
            temp = temp->next;
        }
        printf(" -> NULL\n");
    }
}

int main() {
    printf("Nhap so dinh:");
    int n;
    scanf("%d", &n);
    int matrix[MAX][MAX] = {
        {0, 1, 1, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 1, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    // Khởi tạo danh sách rỗng
    for (int i = 0; i < n; i++) {
        graph[i] = NULL;
    }

    // Chuyển ma trận -> danh sách kề
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (matrix[i][j] == 1) {
                addEdge(i, j);
            }
        }
    }

    // In danh sách kề
    printGraph(n);

    return 0;
}