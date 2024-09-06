#include <stdio.h>
int main(){
    int a,pos,sum,n1,n2;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&a);
    printf("Input %d elemnets in the array :\n",a);
    int arr[a];
    for (int i = 0; i<a; i++)
    {   
        printf("element-%d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The given array is ");
    for(int i=0; i<a ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The given sum : ");
    scanf("%d",&sum);
    for(int i = 0; i<a ;i++)
    {
        for(int j=i+1 ; j<a ; j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                n1 = i;
                n2 = j;
            }
        }
    }
    printf("Pair of elements can make the given sum by value of index %d and %d",n1,n2);
    printf("\n");
}