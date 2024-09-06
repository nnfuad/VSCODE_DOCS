#include <stdio.h>
int main(){
    int a ;
    printf("How many values do you wanna store? ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0 ; i<a ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reverse order of the array is : \n");
    for(int i = a-1 ;i>=0 ; i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}