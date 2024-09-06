#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long int sumc(long long int n)
{
    

    long long int sum ;
    if(n!=0){
        sum = pow(n,3);
    n = --n;
    return sum+sumc(n);
    }
    else{
    return 0;
    }
}
/*long long int sumal(long long int a){
    long long int i=0;
    i++;
    if(a!=0)
    {
        
        return sumc(a)+sumc(a-1);

    }
    else return 0;
}*/


int main()
{
    long long int a,b;
    scanf("%llu",&a);
    long long int sumall=0;
    for(long long int i=0 ; i<a ;i++){
        long long int c=0;
        scanf("%llu",&b);
        for(long long int i =b ;i>=1 ;i--){
            c=c+sumc(i);
        }
        printf("%llu\n",c);
        
    }
    



}








