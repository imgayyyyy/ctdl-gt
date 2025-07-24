//
// Created by DELL on 24/07/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int vex;
    struct Node* next;
} Node;

Node* createNode(int vex) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vex = vex;
    newNode->next = NULL;
    return newNode;
}

Node* Adjacency[100];
int n;

void addEdge(int u, int v) {
    Node* nodeU = createNode(v);
    nodeU->next = Adjacency[u];
    Adjacency[u] = nodeU;

    Node* nodeV = createNode(u);
    nodeV->next = Adjacency[v];
    Adjacency[v] = nodeV;
}

void printfAdjacency() {
    for (int i = 0; i < n; i++) {
        Node* temp = Adjacency[i];
        printf("%d: ", i);
        while (temp != NULL) {
            printf("%d -> ", temp->vex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    printf("Nhap so dinh: ");
    scanf("%d", &n);

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(3, 2);
    addEdge(1, 3);
    addEdge(3, 4);

    printfAdjacency();

    return 0;
}
