#include <stdio.h>
int minmax(int a ,int arr[]){
    int max = arr[0];
    int min = arr[0];
    for(int i = 1 ; i<a ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return max,min;
}
int main(){
    printf("Number of values you want to input:");
    int n;
    scanf("%d",&n);
    int ar1[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar1[i]);
        printf("\n");
    }
    minmax(n,ar1);
    printf("%d",minmax(n,ar1));
    return 0;
}