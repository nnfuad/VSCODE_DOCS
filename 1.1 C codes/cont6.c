#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);

        int count = 1;
        while (a % 2 == 0) {
            a /= 2;
            count *= 2;
        }
        while (b % 2 == 0) {
            b /= 2;
            count *= 2;
        }

        if (count >= n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
