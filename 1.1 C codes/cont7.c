#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    int s= pow(5,n);
    printf("%02d\n",s%100);
}