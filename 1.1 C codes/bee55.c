#include <stdio.h>
int main()
{
    int a[100];
    for(int i = 0; i<100 ; i++)
    {
        scanf("%d",&a[i]);
    }
    int count,max= a[0];
    for(int i = 1 ; i<100 ;i++)
    {
        if(max<a[i]){
            count= i;
            max=a[i];
        }
    }
    printf("%d\n%d\n",max,count+1);
    return 0;
}