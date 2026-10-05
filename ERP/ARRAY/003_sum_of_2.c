#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int target = 8;

    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d",j,i);
            }
        }
    }

    return 0;
}