#include <stdio.h>
int main(){
    int arr[3],arr1[3],temp;
    for(int i = 0; i<3; i++){
        scanf("%d",&arr[i]);
        arr1[i] = arr[i];
    }
    for (int i = 0; i<3-1; i++){
        for(int j= 0 ; j<3-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i<3; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    for(int i = 0; i<3; i++){
        printf("%d\n",arr1[i]);
    }
    return 0;
}