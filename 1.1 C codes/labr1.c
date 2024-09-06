#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    printf("The string length is %d\n",strlen(str)-1);
    return 0;
}