#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a ,count =0,side=0;
    int max = 0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0 ;i<a ;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<a ;i++)
    {
        if(arr[i]+arr[i+1]>max){
        max= max+arr[i]+arr[i+1];
        count++;
        if(arr[i]<arr[i+1])
        side = arr[i];
        }
        

    }
    printf("%d\n",count*side);

}