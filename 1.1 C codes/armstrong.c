#include <stdio.h>
#include <math.h>

int main()
{
    int n,n1,n2,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    n2=n;
    int count=0,sum = 0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    while(n1!=0)
    {
        rem = n1 % 10;
        sum = sum+ pow(rem,count);
        n1=n1/10;

    }
    if(sum == n2) printf("Armstrong\n");
    else printf("Not\n");
}