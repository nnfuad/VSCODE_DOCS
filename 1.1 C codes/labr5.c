#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char s[1000];
    printf("Enter the name: ");
    fgets(s,sizeof(s),stdin);
    printf("The name you gave as input was: ");
    puts(s);
    for(int i=0 ;i<(strlen(s));i++)
        {
            if(s[i] == ' ') {count++;}
        }
        if(count == 0) printf("The word count is: %d\n",count);
    if(count != 0) printf("The word count is: %d\n",count+1);
}
