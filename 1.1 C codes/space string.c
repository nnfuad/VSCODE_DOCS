#include <stdio.h>
#include <string.h>
void rev(char *s)
{
    for(int i=strlen(s) ;i<=0 ; i--)
    {
        printf("%s",s[i]);
    }

}
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

    printf("String in reverse order is: ");
    rev(&s);
    //printf("String length is %d\n",count);

}
