#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i<N ; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0 ; j<N ; j++){
        if(arr[j]==0){
            printf("NULL\n");
        }
        if(arr[j]%2!=0 && arr[j]>0){
            printf("ODD POSITIVE\n");
        }
        if(arr[j]%2!=0 && arr[j]<0){
            printf("ODD NEGATIVE\n");
        }
        if(arr[j]%2==0 && arr[j]>0){
            printf("EVEN POSITIVE\n");
        }
        if(arr[j]%2==0 && arr[j]<0){
            printf("EVEN NEGATIVE\n");
        }       
    }
}