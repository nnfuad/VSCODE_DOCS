#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int flag =0;
    char s1[1000],s2[1000];
    printf("First string : ");
    fgets(s1,sizeof(s1),stdin);
    printf("Second string : ");
    fgets(s2,sizeof(s2),stdin);
    //if(strcmp(s1,s2) == 0) printf("The strings are the same\n");
    //if(strcmp(s1,s2) != 0) printf("The strings are not the same\n");
    if(strlen(s1) != strlen(s2)){
        printf("Not the same\n");
        return 0;
    }

    for(int i=0,j=0; i<strlen(s1),j<strlen(s2); i++,j++)
    {

        if(s1[i] != s2[j])
            {
                flag =1;
                break;
        }
    }
    if(flag ==1) printf("Not the same\n");
        else printf("Same string\n");
}
