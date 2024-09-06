#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fptr;
    char ch = 'a';
    char str[]="Hello Nafis";
    /*fptr = fopen("text1.txt","w");
    if(fptr == NULL)
    {
        printf("NOT POSSIBLE TO OPEN FILE AS IT DOESN'T EXIST\n");
        exit(1);
    }
    fputc(ch,fptr);
    fputs(str,fptr);
    fprintf(fptr," bro %c %s",ch,str);*/
    fptr = fopen("text1.txt","r");
    if(fptr == NULL)
    {
        printf("NOT POSSIBLE TO OPEN FILE AS IT DOESN'T EXIST\n");
        exit(1);
    }
    while(!feof(fptr))
    {
        for(int i = 0 ; i<=10 ; i++)
        {
            fgetc(fptr);
        }
        printf("%c",ch);
    }
    fclose(fptr);

}