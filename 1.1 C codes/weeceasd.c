#include <stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    for(int i=0 ;i<a ;i++)
    {   
        int n;
        scanf("%d",&n);
        int arr1[n],arr2[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[j]);
        }
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr2[j]);
        }
        for(int j=0;j<n ;j++)
        {
            if(arr1[j] == arr2[j])
            {
                count++;
            }
        }
        printf("%d\n",count);
        count =0;
        
    }
    return 0;
}