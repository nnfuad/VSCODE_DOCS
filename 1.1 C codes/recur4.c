#include <stdio.h>

int recur(int a)
{
    if(a == 0) return 0;
    else{
        return recur(a-1) +a;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int f = recur(n);
    printf("%d\n",f);
    return 0;
}