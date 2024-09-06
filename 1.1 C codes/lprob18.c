#include <stdio.h>

int main() {
    int n, n1, revn1 = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    n1 = n;
    for (; n != 0; n /= 10) {
        rem = n % 10;
        revn1 = revn1 * 10 + rem;
    }
    if (n1 == revn1) {
        printf("%d is a palindrome.\n", n1);
    } else {
        printf("%d is not a palindrome.\n", n1);
    }
    return 0;
}