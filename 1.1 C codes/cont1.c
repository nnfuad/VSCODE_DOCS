#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char str[100];
    for(int i = 1; i<=n; i++){
        
        fgets(str,100,stdin);
        if(strlen(str)>10){
            printf("%c%d%c\n",str[0],(int)strlen(str)-3,str[strlen(str)-2]);
        }
        else printf("%s",str);

    }
}