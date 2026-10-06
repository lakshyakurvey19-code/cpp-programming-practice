#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void Top() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element = %d\n", stack[top]);
    }
}
 
int main() {
    push(20);
    push(10);
    push(30);
    Top();
    pop();
    pop();
    Top();

    return 0;
}