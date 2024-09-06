#include <stdio.h>
int main(){
    int a,temp,nzi=0;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&a);
    printf("Input %d elemnets in the array :\n",a);
    int arr[a];
    for (int i = 0 ; i<a ; i++)
    {   
        printf("element-%d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The given array is: ");
    for(int i = 0 ; i<a ; i++ )
    {
        printf("%d ",arr[i]);
    }
    printf("\n The new array is:\n");
    for (int i = 0; i < a; i++) {
        if (arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[nzi];
            arr[nzi] = temp;
            nzi++;
        }
    }
    for(int i = 0 ; i<a ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}