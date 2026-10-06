#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            push(i);
        }
    }
    
    printf("Factors of %d are: ", n);

    while (top != -1) {
        printf("%d ", pop());
    }

    return 0;
}