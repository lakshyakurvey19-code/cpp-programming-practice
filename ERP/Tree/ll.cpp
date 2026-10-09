#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
int main(){
    struct node *root,*a,*b;

    root=(struct node*)malloc(sizeof(struct node));
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));

    root->data=50;
    root->left=a;
    root->right=b;

    a->data=30;
    b->data=70;

    printf("Root Node: %d\n",root->data);
    printf("Left Child of Root Node: %d\n",root->left->data);
    printf("Right Child of Root Node: %d\n",root->right->data);

    return 0;
}