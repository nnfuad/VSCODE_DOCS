#include <stdio.h>
int main(){
    int a,sum=0 ;
    printf("How many values do you wanna store? ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0 ; i<a ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<a ; i++)
    {
        sum+=arr[i];
    }
    printf("The sum of all elements stored in the array is: %d\n",sum);
    return 0;
}