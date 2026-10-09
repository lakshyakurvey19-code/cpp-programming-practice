#include <stdio.h>

#define MAX 5

int deque[MAX];
int front = -1;
int rear = -1;

void insertRear(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque is Full\n");
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
    deque[rear] = val;
    printf("Inserted %d at rear\n", val);
}

void deleteFront() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertRear(30);
    display();
    deleteFront();
    display();
    return 0;
}
