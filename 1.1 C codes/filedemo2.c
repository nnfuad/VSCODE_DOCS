#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[100];
    gets(name);
    int l = strlen(name);

    file = fopen("tets.txt ","a");
    if(file == NULL)
    {
        printf("File doesnt exist.\n");
    }
    else 
    {
        printf("File created and opened.\n");
        for(int i = 0 ; i<l ; i++)
        {
            fputc(name[i],file);
        }
        fputs("\n",file);
        printf("File written successfully\n");
        fclose(file);
    }
}