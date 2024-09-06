#include <stdio.h>
#include <string.h>

int main()
{
    int count=0;
    char s[1000];
    printf("Enter your name: ");
    fgets(s,sizeof(s),stdin);
    for(int i=0; i<strlen(s) ; i++)
    {
        printf("%c ",s[i]);
    }

}
