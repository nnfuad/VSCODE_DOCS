#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;char s[50];char sen[50*7];
    scanf("%c\n",&ch);
    scanf("%[^\n]%*c\n", s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n", sen);
    return 0;
}