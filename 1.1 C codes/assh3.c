#include <stdio.h>
int main(){
    int a,sum=0 ;
    printf("How many values do you wanna store? ");
    scanf("%d",&a);
    int arr1[a];
    for (int i = 0 ; i<a ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[a];
    for (int i = 0 ; i<a ; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("copied elements of arr1 have been stored to arr2.The elements of arr2 are: ");
    for (int i = 0 ; i<a ; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}