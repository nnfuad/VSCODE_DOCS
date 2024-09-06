#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isprime(int i) {
    if (i <= 1) return 0;
    for (int j = 2; j <= sqrt(i); j++) {
        if (i % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[j]);
        }
        if (isprime(arr[0] + arr[1]) == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    return 0;
}
