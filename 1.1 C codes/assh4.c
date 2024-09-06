#include <stdio.h>
int main(){
    int a,count=0 ;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&a);
    printf("Input %d elemnets in the array :\n",a);
    int arr[a];
    for (int i = 0 ; i<a ; i++)
    {   
        printf("element-%d: ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    printf("The number of duplicate elements found in the array: %d\n",count);
}