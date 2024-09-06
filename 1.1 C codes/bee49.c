#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int countin=0,countout=0;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j<n ; j++){
        if(arr[j]>=10 && arr[j]<=20){
            countin++;
        }
        else countout++;
    }
    printf("%d in\n%d out\n",countin,countout);
}