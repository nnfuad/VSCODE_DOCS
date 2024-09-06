#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int l = strlen(s);
    if (s[l - 1] == '\n') {
        s[l - 1] = '\0';
    }
    int maxlen = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        maxlen++;
    }

    printf("Maximum number of characters in the string: %d\n", maxlen);
    return 0;
}
