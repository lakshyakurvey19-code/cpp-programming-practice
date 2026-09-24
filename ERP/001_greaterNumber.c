#include<stdio.h>
int main(){
    int arr[100],count=0,n;

    printf("Enter the number :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    for(int i=1; i<=n-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            count++;
        }
    }
    printf("\n %d",count);

    return 0;
}