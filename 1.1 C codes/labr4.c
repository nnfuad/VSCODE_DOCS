#include <stdio.h>
#include <string.h>
void rev(char *s)
{
    for(int i=strlen(s)-1 ;i>=0 ; i--)
    {
        printf("%c",s[i]);
    }

}
int main()
{
    char s[1000];
    printf("Enter your name: ");
    fgets(s,sizeof(s),stdin);
    printf("String in reverse order is: ");
    rev(s);
    printf("\n");
}
