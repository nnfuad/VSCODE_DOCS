#include <stdio.h>

int main() {
    int base, pow, calc = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &pow);

    for (int i = 0; i < pow; i++) {
        calc *= base;
    }

    printf("%d^%d = %d\n", base, pow, calc);

    return 0;
}
