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

typedef struct Queue {
    Node* data;
    struct Queue* next;
} Queue;

void enqueue(Queue** front, Queue** rear, Node* node) {
    Queue* temp = (Queue*)malloc(sizeof(Queue));
    temp->data = node;
    temp->next = NULL;
    if (*rear == NULL) {
        *front = *rear = temp;
    } else {
        (*rear)->next = temp;
        *rear = temp;
    }
}

Node* dequeue(Queue** front, Queue** rear) {
    if (*front == NULL) return NULL;
    Queue* temp = *front;
    Node* result = temp->data;
    *front = (*front)->next;
    if (*front == NULL) *rear = NULL;
    free(temp);
    return result;
}

void preorder(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void levelOrder(Node* root) {
    Queue* front = NULL;
    Queue* rear = NULL;
    enqueue(&front, &rear, root);
    while (front != NULL) {
        Node* current = dequeue(&front, &rear);
        printf("%d ", current->data);
        if (current->left != NULL) enqueue(&front, &rear, current->left);
        if (current->right != NULL) enqueue(&front, &rear, current->right);
    }
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    levelOrder(root);
    printf("\n");

    return 0;
}