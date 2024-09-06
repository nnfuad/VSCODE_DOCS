#include <stdio.h>
int main()
{   
    int n,sum1=0,sum2;
    scanf("%d",&n);
    sum2 = (n*(n+1)/2);
    int arr[n-1];
    for(int i=0 ; i<(n-1) ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<(n-1) ; i++)
    {
        sum1 = sum1 + arr[i];
    }
    printf("%d\n",sum2-sum1);


}