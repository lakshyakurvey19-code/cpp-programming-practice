#include<stdio.h>
int main(){
    int n;
    int front = -1;
    int rear = -1;
    int arr[100];

    printf("Enter the number:");
    scanf("%d",&n);

    front = 0;
    for(int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
        rear++;    
    }

    for(int i = 0; i< n; i++){
        printf("%d ",arr[i]);    
    }

    printf("\nback is %d",rear);

    return 0;
}