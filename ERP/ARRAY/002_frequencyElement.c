#include<stdio.h>
int main(){
    int n,arr[100],count=0;

    printf("Enter the number :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    for(int i=0; i<=n; i++){
        if(arr[i]%i == 0){
            count++;
        }
    }

    return 0;

}