#include <stdio.h>

unsigned long long fact(int n)
{
    if(n==1 || n==0) return 1;
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int a ;
    scanf("%d",&a);
    unsigned long long f = fact(a);
    printf("%llu\n",f);
    return 0;
}