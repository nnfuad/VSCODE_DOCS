#include <stdio.h>
int main() {
    int n, revnum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        int digit = n % 10;
        revnum = revnum * 10 + digit;
        n /= 10;
    }
    printf("Reversed number: %d\n", revnum);
    return 0;
}
