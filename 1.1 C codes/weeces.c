#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("\n");
    for(int i=1 ; i<=a ;i++){
        int n,sum=0;
        scanf("%d",&n);
        int arr[n];
            for(int j = 0 ; j<n ; j++)
            {
                scanf("%d",&arr[j]);
                if(arr[j] <0) {arr[j]=0;}
                sum =sum + arr[j];

            }
            printf("Case %d: %d\n\n",i,sum);

    }
}