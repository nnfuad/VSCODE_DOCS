#include <stdio.h>

long long unsigned facto(int a) {
    long long unsigned fact = 1;
    if (a == 0) {
        fact = 1;
    } else if (a < 0) {
        printf("Error...Factorial for negative numbers doesn't exist.\n");
    } else {
        for (long long unsigned i = 1; i <= a; i++) {
            fact = fact * i;
        }
    }
    return fact;
}

long long unsigned sum_srs(int a) {
    int sum = 0;
    for (long long unsigned i = 1; i <= a; i++) {
        sum = sum + (facto(i) / i);
    }
    return sum;
}

int main() {
    int n1;
    long long unsigned result;
    printf("Enter a number: ");
    scanf("%d", &n1);

    result = sum_srs(n1);
    printf("The sum of the series is: %llu\n", result);

    return 0;
}
