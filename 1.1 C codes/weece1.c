#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i = 0 ; i<n ;i++)
    {
        scanf("%d+%d",&a,&b);
        int sum = a+b;
        printf("%d\n",sum);
    }
    return 0;
}