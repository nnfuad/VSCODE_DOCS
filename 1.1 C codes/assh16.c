#include <stdio.h>
#include <string.h>
int main(){
    char str[1000000],revstr[1000000],temp;
    printf("enter the string:");
    scanf("%s",&str);
    for(int i = (strlen(str)-1),j=0 ; i>=0,j<strlen(str) ; i--,j++)
    {
        revstr[j] = str[i];
    }
    printf("reversed string is %s\n",revstr);
}