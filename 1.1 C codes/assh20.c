#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100000],str2[100000],str3[200000];
    printf("enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int n = strlen(str1)+strlen(str2)+1;
    for(int i = 0 ; i<strlen(str1)-1 ; i++)
    {
        str3[i] = str1[i];
    }
    str3[strlen(str1)-1] = ' ';
    for(int i = strlen(str1),j=0 ; i<n,j<strlen(str2) ; i++,j++)
    {
        str3[i] = str2[j];
    }
    printf("After concatenation the string is:\n%s",str3);
    return 0;
}