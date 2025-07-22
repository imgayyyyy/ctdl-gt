//
// Created by DELL on 22/07/2025.
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

Node* buildTree() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);
    return root;
}

int findMaxValue(Node* root) {
    if (root == NULL) return -999999;
    int rootVal = root->data;
    int leftMax = findMaxValue(root->left);
    int rightMax = findMaxValue(root->right);
    int max = rootVal;
    if (leftMax > max) max = leftMax;
    if (rightMax > max) max = rightMax;
    return max;
}

int main() {
    Node* root = buildTree();
    int maxValue = findMaxValue(root);
    printf("max value: %d\n", maxValue);
    return 0;
}