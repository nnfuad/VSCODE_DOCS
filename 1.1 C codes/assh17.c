#include <stdio.h>
#include <string.h>
int main(){
    char str[1000000];
    printf("enter the string:");
    scanf("%s",&str);
    int countV =0;
    int i =0;
    while(str[i] != '\0')
    {
        if((str[i] == 'a') ||(str[i] == 'A') ||(str[i] == 'e') ||(str[i] == 'E') ||
        (str[i] == 'I') ||(str[i] == 'i') ||(str[i] == 'o') ||(str[i] == 'O') ||(str[i] == 'U') ||(str[i] == 'u'))
        {
        countV++;
        }
        i++;
    }
    int countC= strlen(str) - countV;
    printf("Total number of vowels in the string is %d\n",countV);
    printf("Total number of consonants in the string is %d\n",countC);
}