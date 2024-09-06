#include <stdio.h>
int main()
{
    FILE *file;
    fopen("tets.txt ","w");
    if(file == NULL)
    {
        printf("File doesnt exist.\n");
    }
    else 
    {
        printf("File created and opened.\n");
        fclose(file);
    }
}