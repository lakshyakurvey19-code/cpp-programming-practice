#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int isMatching(char open, char close)
{
    if (open == '(' && close == ')' || open == '{' && close == '}' || open == '[' && close == ']'){
        return 1;
    }
}

int main()
{
    char exp[MAX];
    int i, valid = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if (top == -1){
                valid = 0;
                break;
            }
            if (!isMatching(pop(), exp[i])){
                valid = 0;
                break;
            }
        }
    }
    if (valid)
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}