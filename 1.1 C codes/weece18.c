#include <stdio.h>
int main(){
    int temp,i,j,k,n;
    scanf("%d",&n);
    int arr[n-1];
    for(i = 0 ; i<n-1 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i<(n-2) ; i++){
        for(j = 0 ; j<(n-2-i) ; j++){
            if(arr[j]>arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    for(i = 0;i<n-1;i++)
    {
        /*if((arr[i+1]-arr[i]) > 1)
        {
            printf("%d\n",arr[i]+1);
        }
        if((arr[i] == arr[n-2]) && (arr[n-2]-arr[n-3]) == 1){
            printf("%d\n",arr[n-1]+1);
            }*/
        if((i < (n-2)) && (arr[i+1]-arr[i])>1)
        {
            printf("%d\n",arr[i]+1);
        }
        if(i == (n-2) && (arr[i+1]-arr[i])>1)
        
    }
}