#include <stdio.h>
int main(){
    int a,temp ;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&a);
    printf("Input %d elemnets in the array :\n",a);
    int arr[a];
    for (int i = 0 ; i<a ; i++)
    {   
        printf("element-%d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<a-1; i++)
    {
        for(int j=0 ; j<(a-1)-i ; j++ )
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Maximum element is : %d\n",arr[a-1]);
    printf("Minimum element is : %d\n",arr[0]);
    return 0;
}