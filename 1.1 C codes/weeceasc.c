#include <stdio.h>
int main()
{
    int a,b,temp,sum=0;
    scanf("%d %d",&a,&b);
    int a1=a;
    int arr[b-a+1];
    for(int i=0 ; i<b-a1+1 ;i++)
    {
        arr[i] = a;
        a++;
    }
    for(int i = 0 ; i<b-a1+1 ;i++)
    {
        if(arr[i]%2 !=0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    printf("\n");
}
