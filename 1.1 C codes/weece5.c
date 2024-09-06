#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    if(sum >= 22) printf("bust\n");
    else printf("win\n");
    return 0;
}