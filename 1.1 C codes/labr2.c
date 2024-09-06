#include <stdio.h>

int main(){
    char str[1000];
    int count = 0;
    fgets(str,sizeof(str),stdin);
    for(int i = 0 ; str[i]!='\0' ; i++)
    {
        count++;
    }
    printf("The length of the string is %d\n",count-1);
    return 0;
}