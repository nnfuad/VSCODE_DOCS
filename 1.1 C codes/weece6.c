#include <stdio.h>
int main(){
    int a=1,b=2,c=3,m,n;
    scanf("%d %d",&n,&m);
    if((m==a && n==b) || (m==b && n==a)){ printf("%d\n",c);}
    else if((m==b && n==c) || (m==c && n==b)){ printf("%d\n",a);}
    else if((m==a && n==c) || (m==c && n==a)){ printf("%d\n",b);}
    return 0;
}