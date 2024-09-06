#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int a;
    long long int b=a;
    scanf("%llu",a);
    int flag=1;
    while(a)

    {
        long long int count2=0;
        if(a!=0){

            count2=b%(a%10);
            if(count2==0){
                flag=0;
            }
            else {
                break;
            }
        }
    }
    
}