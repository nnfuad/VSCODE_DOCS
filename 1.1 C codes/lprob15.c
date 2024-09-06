#include <stdio.h>

int main() {
    int n,count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }
    for (count = 0; n > 0; count++) {
        n /= 10;
    }
    printf("n of digits: %d\n", count);
    return 0;
}
