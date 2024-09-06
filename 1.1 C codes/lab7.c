#include <stdio.h>
void lnum(int n,int arr1[]){
    int large=arr1[0];
    for(int i=1;i<n;i++){
        if(arr1[i]>large){
            large = arr1[i];
        }
    }
    printf("The largest element in the array is : %d\n",large);
}
int main(){
    int a;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    lnum(a,arr);
    return 0;
}