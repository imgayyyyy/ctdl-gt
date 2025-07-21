//
// Created by DELL on 21/07/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    int value;
    scanf("%d", &value);
    Node* root = createNode(value);
    printf("node = {\n");
    printf("    data: %d,\n", root->data);
    printf("    left: NULL,\n");
    printf("    right: NULL\n");
    printf("}\n");
    return 0;
}