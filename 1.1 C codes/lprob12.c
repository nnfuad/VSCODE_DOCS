#include <stdio.h>

int main() {
    int n, i;
    long long int a = 0, b = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %lld, %lld", a, b);

    for (i = 3; i <= n; i++) {
        next = a + b;
        printf(", %lld", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
/*#include <stdio.h>

int main() {
    long long int a = 0, b = 1, next, limit;

    printf("Print the Fibonacci sequence up to number: ");
    scanf("%lld", &limit);

    printf("Fibonacci Sequence: ");

    if (limit >= 1) {
        printf("%lld", a);
    }
    if (limit >= 2) {
        printf(", %lld", b);
    }

    for (next = a + b; next <= limit; next = a + b) {
        printf(", %lld", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}*/
