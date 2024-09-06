#include <stdio.h>
int main()
{
    int i=1,x=1;
    while (x!=0){
        scanf("%d",&x);
        if(x !=0){
            printf("Case %d: %d\n",i,x);
        }
        i++;
    }
}