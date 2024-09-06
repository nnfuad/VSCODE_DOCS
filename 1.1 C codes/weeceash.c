#include <stdio.h>
#include <string.h>

void bubblesort(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char a[100], b[100], c[200], s[300];
    scanf("%s %s %s", a, b, c);
    strcat(s, a);
    strcat(s, b);
    bubblesort(s);
    bubblesort(c);
    if (strcmp(s, c) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
