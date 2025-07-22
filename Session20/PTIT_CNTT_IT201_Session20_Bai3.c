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

typedef struct Queue {
    Node* data;
    struct Queue* next;
} Queue;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

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

void addNode(Node* root, int value) {
    Queue* front = NULL;
    Queue* rear = NULL;
    enqueue(&front, &rear, root);

    while (front != NULL) {
        Node* current = dequeue(&front, &rear);
        if (current->left == NULL) {
            current->left = createNode(value);
            break;
        } else {
            enqueue(&front, &rear, current->left);
        }

        if (current->right == NULL) {
            current->right = createNode(value);
            break;
        } else {
            enqueue(&front, &rear, current->right);
        }
    }
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
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);
    root->left->right = createNode(6);

    addNode(root, 7);

    levelOrder(root);
    return 0;
}