#include <stdio.h>

#define MAX 5

struct Element {
    int value;
    int priority;
} pq[MAX];

int size = 0;

void enqueue(int value, int priority) {
    if (size == MAX) {
        printf("Priority Queue is Full\n");
        return;
    }
    pq[size].value = value;
    pq[size].priority = priority;
    size++;
    printf("Inserted value=%d with priority=%d\n", value, priority);
}

int peekHighestPriority() {
    int highest = -1;
    int ind = -1;
    for (int i = 0; i < size; i++) {
        if (highest == -1 || pq[i].priority > highest) {
            highest = pq[i].priority;
            ind = i;
        }
    }
    return ind;
}

void dequeue() {
    if (size == 0) {
        printf("Priority Queue is Empty\n");
        return;
    }
    int ind = peekHighestPriority();
    printf("Dequeued value=%d (priority=%d)\n", pq[ind].value, pq[ind].priority);
    for (int i = ind; i < size - 1; i++) {
        pq[i] = pq[i + 1];
    }
    size--;
}

int main() {
    enqueue(100, 2);
    enqueue(200, 1);
    enqueue(300, 3);
    dequeue();
    dequeue();
    return 0;
}
