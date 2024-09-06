#include <stdio.h>
int main(){
    int a;
    printf("Input the number of elements to be stored in the first array:");
    scanf("%d",&a);
    printf("Input %d elemnets in the array :\n",a);
    int arr1[a];
    for (int i = 0 ; i<a ; i++)
    {   
        printf("element-%d: ",i);
        scanf("%d",&arr1[i]);
    }
    int b;
    printf("Input the number of elements to be stored in the second array:");
    scanf("%d",&b);
    printf("Input %d elemnets in the array :\n",b);
    int arr2[b];
    for (int i = 0 ; i<b ; i++)
    {   
        printf("element-%d: ",i);
        scanf("%d",&arr2[i]);
    }
    int arr3[a+b];
    for(int i=0 ;i<a;i++)
    {
        arr3[i] = arr1[i];
    }
    for(int i=a ,j=0;i<b,j<b;i++,j++)
    {
        arr3[i] = arr2[j];
    }
    int temp;
    for(int i=0; i<(a+b-1) ; i++)
    {
        for(int j=0 ; j<(a+b-1)-i ; j++ )
        {
            if(arr3[j]>arr3[j+1])
            {
                temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp;
            }
        }
    }
    for(int i=(a+b-1);i>=0;i--)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    
}