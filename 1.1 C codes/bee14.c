#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a,b,c,majab;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    majab=(a+b+abs(a-b))/2;
    if(c>majab){
        printf("%d eh o maior\n",c);
    }
    else{
        printf("%d eh o maior\n",majab);
    }

    return 0;
}