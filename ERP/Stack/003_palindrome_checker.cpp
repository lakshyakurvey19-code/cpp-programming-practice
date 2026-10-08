#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str[MAX], stack[MAX];
    int top = -1;
    int i, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != stack[top--]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}