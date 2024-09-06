#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int a,count =1,num=0;
    do{
    scanf("%d",&a);
    }while(a!=0);
    int arr[a],arr2[a];

    for(int i=0 ;i<a ;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i = 0 ; i<a ;i++)
    {
        if(arr[i]>=arr[i+1]){
            count++;
            num=arr[i];
        }
    }
    printf("%d\n",count*num);
    

}