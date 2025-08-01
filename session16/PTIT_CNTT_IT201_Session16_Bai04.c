//
// Created by DELL on 13/07/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

Queue createQueue() {
    Queue q;
    q.front = NULL;
    q.rear = NULL;
    return q;
}

Node* createNode() {
    int value;
    printf("Nhap so nguyen: ");
    scanf("%d", &value);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void enqueue(Queue* q) {
    Node* newNode = createNode();
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int frontValue(Queue q) {
    if (q.front == NULL) {
        printf("empty queue\n");
        return -1;
    }
    return q.front->data;
}