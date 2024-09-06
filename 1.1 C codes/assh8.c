#include <stdio.h>
int main(){
    int a,pos;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&a);
    printf("Input %d elemnets in the array :\n",a);
    int arr[a];
    for (int i = 0,j=1 ; i<a,j<=a ; i++,j++)
    {   
        printf("element-%d at position %d: ",i,j);
        scanf("%d",&arr[i]);
    }
    printf("The element of what position do you want to delete?\n");
    scanf("%d",&pos);
    for(int i = pos ; i<a ; i++ ){
        arr[i-1] = arr[i];
        
    }
    printf("The new array with deleted element ");
    for(int i = 0 ; i<a-1 ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}