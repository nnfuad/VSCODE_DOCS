#include <stdio.h>
#include <math.h>
int sq(int a){
   int sq= a*a;
   return sq;
}
int main(){
    int base,a;
    printf("Whats the base number? : ");
    scanf("%d",&base);
    a=sq(base);
    printf("The square of %d is %d\n",base,a);
}