#include <stdio.h>

#define MAX 5

int cqueue[MAX];
int front = -1;
int rear = -1;

void enqueue(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Circular Queue is Full\n");
        return;
    }
    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    cqueue[rear] = val;
    printf("Enqueued: %d\n", val);
}

void dequeue() {
    if (front == -1) {
        printf("Circular Queue is Empty\n");
        return;
    }
    printf("Dequeued: %d\n", cqueue[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    dequeue();
    return 0;
}