#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int digitc(int a)
{
    int count=0;
    while(a!=0){
        
        a%=10;
        count++;
    
    }
    return count;

}

// int ecentricyn(int a)
// {
//     for(int i = )
//     if(a/(a%10)==0)
// }

int main()
{
printf("%d",digitc(100));
}