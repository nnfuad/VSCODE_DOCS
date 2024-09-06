#include <stdio.h>
int main()
{
    int n,a,rem,res=0;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    
    {
        rem=n%10;
        res= res*10 + rem;
        n=n/10;
    }
    if(res == a) printf("Pallindrome\n");
    else printf("Not");
}