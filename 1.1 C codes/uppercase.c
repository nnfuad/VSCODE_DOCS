#include <stdio.h>
#include <string.h>
#include <ctype.h>//for lowercase transformation

void tolowercase(char s[]){
    for(int i =0 ; i<strlen(s) ;i++)
    {
        if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        
    }
    
}

int main()
{
    char s[100000];
    
    printf("Your name is? ");
    scanf("%s",&s);
    tolowercase(s);
    printf("Your name in all lowercase: %s\n",s);
    return 0;

}