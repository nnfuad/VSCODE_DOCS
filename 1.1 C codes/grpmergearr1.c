#include <stdio.h>
int main()
{
    int a,b;
    
    printf("Enter the numbers you want to store in the first array:");
    scanf("%d",&a);
    printf("Enter the numbers you want to store in the second array:");
    scanf("%d",&b);
    int arr1[a];
    int arr2[b];

    for(int i = 0; i<a; i++)
    {
        printf("For first array Enter element %d:",i+1);
        scanf("%d",&arr1[i]);
    }

    for(int i = 0; i<b; i++)
    {
        printf("For second array Enter element %d:",i+1);
        scanf("%d",&arr2[i]);
    }
    int n= a+b;
    int arr3[n];


    for(int i = 0; i<a; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i=0 ; i<n ;i++)
    {
        arr3[i+a] = arr2[i];
    }

    for(int i = 0 ; i<n ; i++)
    {
        printf("%d ",arr3[i]);
    }

}