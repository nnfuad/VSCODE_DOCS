#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int f(int n) {
    if (n == 1) {
        return -1;
    } else if (n % 2 == 0) {
        return f(n - 1) + n;
    } else {
        return f(n - 1) - n;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", f(n));

    return 0;
}
