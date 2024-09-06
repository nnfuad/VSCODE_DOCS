/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    fgets(str,sizeof(str),stdin);
    int l = strlen(str)-1;
    for(int i = 0 ; i<l/2 ; i++)
    {
        if(str[i]!= str[l-1-i])
        {
            printf("Not a pallindrome\n");
            break;
        }
    }
    if(l/2 == i) printf("Pallindrome\n");

}*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int l = strlen(str);
    int i;

    for (i = 0; i < l / 2; i++) {
        if (str[i] != str[l - 1 - i]) {
            printf("Not a palindrome\n");
            break;
        }
    }

    if (i == l / 2) {
        printf("Palindrome\n");
    }

    return 0;
}
