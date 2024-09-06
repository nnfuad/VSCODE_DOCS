#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of integers you want to store: ");
    scanf("%d",&n);
    int arr1[n+1];
    printf("Now , type the numbers followed by a space: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for (i=0;i<n;i++){
        printf("%d\n",arr1[i]);
        sum=sum+arr1[i];
    }
    printf("\nsum is %d\n\n",sum);
    printf("reversed order is: \n");
    for (i=n;i>=0;i--){
        printf("%d\n",arr1[i]);
    }
}