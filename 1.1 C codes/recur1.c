#include <stdio.h>
#include <string.h>

int recsum(int *arr,int n)
{
    if(n == 0)
    return 0;
    else{
        return arr[n-1] + recsum(arr,n-1);
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    int n;
    
    for(int i = 0 ; i<a ; i++)
    {
        scanf("%d",&n);
        int arr[n];
        for(int j = 0 ; j<n ; j++)
        {
            scanf("%d",&arr[j]);
        }
        int sum = recsum(arr,n);
        printf("Case %d: %d\n",i+1,sum);

    }
    return 0;
}