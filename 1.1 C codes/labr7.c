#include <stdio.h>

int main() {
    char s[1000];
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int dcount = 0;
    int rcharcount = 0;
    int scharcount = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            dcount++;
        } else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            rcharcount++;
        } else {
            scharcount++;
        }
    }

    printf("Digits: %d\n", dcount);
    printf("Characters: %d\n", rcharcount);
    printf("Special characters: %d\n", scharcount);
}
