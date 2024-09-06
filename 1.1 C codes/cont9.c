#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int rem = a % b;
        int count = 0;

        if (rem != 0) {
            count = b - rem;
        }

        printf("%d\n", count);
    }

    return 0;
}
