#include <stdio.h>
#include <string.h>
int main()
{
    int a,str_len;
    scanf("%d",&a);
    char str[100];
    for(int i=0 ; i<a ; i++)
    {
    scanf("%s",&str);
    str_len = strlen(str);
    int count = 0;
        if(str_len >= 10)
        {
            printf("%c",str[0]);
            for(int i = 1;i<str_len-1;i++)
            {   
                count++;
            }
            printf("%d",count);
            printf("%c\n",str[str_len-1]);
        }
        else printf("%s\n",str);
    }
    return 0;
}