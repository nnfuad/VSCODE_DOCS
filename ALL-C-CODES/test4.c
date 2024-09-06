#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    int steps=0;
    scanf("%d",&a);
    if(a!=0){
        if(a%5 !=0){
        steps= a/5 +1;
        }
        else steps = a/5;
    }
   
    printf("%d\n",steps);
    
}