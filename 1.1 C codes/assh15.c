#include <stdio.h>
int main(){
    char str[1000000];
    printf("enter the string:");
    scanf("%s",&str);
    int count =0;
    int i =0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("string length is %d\n",count);
}