#include <stdio.h>

void print1(int r,int n,int p)
{
    if(n>p){
        return;
    }
    printf("%d",n);
    n++;
    print1(r,n,p);


}
void print2(int r,int n,int p)
{
    if(n ==p){
        printf("%d",1);
        return;
    }
    printf("%d",p);
    p--;
    print2(r,n,p);
    
}

int main()
{
    int a;
    scanf("%d",&a);
    print1(a,1,9);
    print2(a,1,9);
    printf("\n");
    return 0;
}
