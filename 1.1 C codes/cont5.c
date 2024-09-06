#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int n,m,c;
    int mc=0;
    int cc=0;
    scanf("%d",&n);
    for(int i=0 ;i<n ;i++){
        scanf("%d %d",&m,&c);
        if(m>c) mc++;
        else if(c>m) cc++;
    }
    if(mc>cc) printf("Mishka\n");
    else if(mc<cc) printf("Chris\n");
    else printf("Friendship is magic!^^\n");
}