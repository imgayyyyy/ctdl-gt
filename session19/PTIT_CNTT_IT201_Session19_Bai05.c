//
// Created by DELL on 21/07/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool search(Node* root, int value) {
    if (root == NULL) return false;
    if (root->data == value) return true;
    return search(root->left, value) || search(root->right, value);
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    int findValue;
    scanf("%d", &findValue);

    if (search(root, findValue))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}